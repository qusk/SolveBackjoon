#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int Time, S;
    cin >> Time >> S;

    if(12 <= Time && Time <= 16 && S == 0) {
        cout << 320 << endl;
    } else {
        cout << 280 << endl;
    }
}   