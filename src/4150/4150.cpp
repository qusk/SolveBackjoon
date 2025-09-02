#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a, string b) {
  string result = "";
  int carry = 0;

  if(a.length() < b.length()) swap(a, b);
  // a가 123이면 321로 뒤집기, 숫자는 왼쪽부터 읽는데 덧셈은 오른쪽 부터 하니까 뒤집는다
  reverse(a.begin(), a.end()); 
  reverse(b.begin(), b.end());

  // size_t는 unsigned 정수
  for(size_t i = 0; i < a.length(); i++) {
    // a값 정수로 변환
    int digitA = a[i] - '0';
    // b값 정수로 변환
    int digitB = i < b.length() ? b[i] - '0' : 0;

    // 첫번째 수부터 덧셈
    int sum = digitA + digitB + carry;
    // carry에 올림 수 저장
    carry = sum / 10;

    result += (sum % 10) + '0';
  }

  // 마지막 덧셈 후에 carry값이 존재하면 마지막에 carry값 더함
  if (carry) result += carry + '0';
  reverse(result.begin(), result.end());
  return result;
}

int main() {
  int n;
  cin >> n;

  if(n == 1 || n == 2) {
    cout << 1 << endl;
    return 0;
  }

  string fib, a = "1", b = "1";
  for(int i = 3; i <= n; i++) {
    fib = add(a, b);
    a = b;
    b = fib;
  }

  cout << fib << endl;
  return 0;
}