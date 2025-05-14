#include <iostream>

using namespace std;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num, cnt = 0;
    cin >> num;

    for(int i = 0; i < num; ++i) {
        for(int j = i; j < num; ++j) {
            int k = num - i - j;
            if(j > k) {
                break;
            }
            if(i < j + k && j < i + k && k < i + j) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}