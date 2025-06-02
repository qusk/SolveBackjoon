#include <iostream>

using namespace std;


const int M = 1234567891;
const int R = 31;
int main() {
    string str;
    int length;
    long long hash = 0;
    long long r = 1;

    cin >> length;
    cin >> str;

    for(int i = 0; i < length; i++) {
        int a = str[i] - 'a' + 1;  // a일시 str[i] = 'a' - 'a' = 0 + 1을 해서 1이 됨, 수열 표현
        hash = (hash + a * r) % M; // (0 + 1 * 1) % 31
        r = (r * R) % M; // 1 * 31 % 1234567891 = 31
    }

    cout << hash << endl;
}