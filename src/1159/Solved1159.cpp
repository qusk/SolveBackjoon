#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


using namespace std;

int main() 
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int playerCount;
    cin >> playerCount;
    
    vector<string> players(playerCount, "");
    
    for(int i = 0; i < playerCount; ++i) 
    {
        cin >> players[i];
    }

    map<char, int> initialTable;
    vector<int> result;

    for(int i = 0; i < players.size(); ++i) {
        initialTable[players[i][0]]++;
    }

    for(auto c : initialTable) {
        if(c.second >= 5) {
            result.push_back(c.first);
        }
    }

    if(result.empty()) {
        cout << "PREDAJA" << endl;
    } else {
        sort(result.begin(), result.end());
        for(auto c : result) {
            cout << c;
        }
        cout << endl;
    }
    
    return 0;
}