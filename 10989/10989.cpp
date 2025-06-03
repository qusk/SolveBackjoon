#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt[10001] = {};

    int n, count;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> count;
            
    }

    for(int i = 1; i < 10001; ++i) {
        for(int j = 0; j < cnt[i]; ++j) {
            cout << i << '\n';
        }
    }

    return 0;
}
