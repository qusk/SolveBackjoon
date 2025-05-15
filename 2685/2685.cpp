#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 10진수의 수를 base진수로 변환하여 vecotr에 저장하는 함수수
void toBase(int num, int base, vector<int>& digits) {
    if(num == 0) {
        digits.push_back(0);
        return;
    }
    while(num > 0) {
        digits.push_back(num % base);
        num /= base;
    }
    reverse(digits.begin(), digits.end());
}

// vector에 저장된 bas진수의 수를 10진수로 변환하는 함수
// 호너의 법칙 사용
// ex) 2진수 1101을 호너의 법칙을 이용해서 10진수로 변환하면
// 기존 방식 : 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 8 + 4 + 0 + 1 = 13
// 호너의 법칙 : 1*(2^3 + 2^2) + 0*2^1 + 1*2^0 = 1*(8 + 4) + 0*2^1 + 1*2^0 = 12 + 0 + 1 = 13
int toDecimal(const vector<int>& digits, int base) {
    int result = 0;
    for(int digits : digits) {
        result = result * base + digits;
    }
    return result;
}

int main() {
    int T;
    cin >> T;

    while(T--) {
        int B, X, Y;
        cin >> B >> X >> Y;

        vector<int> xDigits, yDigits;
        toBase(X, B, xDigits);
        toBase(Y, B, yDigits);

        int maxLength = max(xDigits.size(), yDigits.size());
        if(xDigits.size() < maxLength) {
            xDigits.insert(xDigits.begin(), maxLength - xDigits.size(), 0);
        }else if(yDigits.size() < maxLength) {
            yDigits.insert(yDigits.begin(), maxLength - yDigits.size(), 0);
        }

        vector<int> resultDigits;
        for(int i = 0; i < maxLength; ++i) {
            int sum = (xDigits[i] + yDigits[i]) % B;
            resultDigits.push_back(sum);
        }

        int result = toDecimal(resultDigits, B);
        cout << result << endl;

    }
    return 0;
}

