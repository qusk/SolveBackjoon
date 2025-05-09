#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

int main() 
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 사람 수:n, 치료제: m, 
    int n, m, k;
    cin >> n >> m >> k;

    string S;
    cin >> S;

    vector<bool> infected(n, false);

    for(int i = 0; i < n; ++i) 
    {
        if(S[i] == 'R') 
        {
            int left = max(0, i - k);
            int right = min(n - 1, i + k);
            for(int j = left; j <= right; ++j) 
            {
                infected[j] = true;
            }
        }
    }

    // n번 돌려서 감염된 사람 수 세기기
    int infectedCount = 0;
    for(int i = 0; i < n; ++i) 
    {
        if(infected[i] == true) 
        {
            infectedCount++;
        }
    }

    if(infectedCount <= m) {cout << "Yes" << endl;}
    else {cout << "No" << endl;} 
    return 0;
}