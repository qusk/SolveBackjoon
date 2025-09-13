#include <iostream>

using namespace std;

// 유클리드 호제법
// 두 수 A와 B의 최대공약수는 B와 A를 B로 나눈 나머지의 최대공햑수와 같다
int gcd(int a, int b) {
  while(b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

// 최소 공배수는 a * b / 최대공약수를 하면 나온다
int Icm(int a, int b) {
  return a * b / gcd(a, b);
}

int main() {
  int a, b;
  cin >> a >> b;

  cout << gcd(a, b) << endl;
  cout << Icm(a, b) << endl;
  
  return 0;
}