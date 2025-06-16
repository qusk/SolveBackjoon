#include <iostream>
#include <string>
// sort 함수를 쓰려면 algorithm 라이브러리 필요
#include <algorithm>

using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;
  cin >> str;

  for(int i = 0; i < str.size() - 1; i++) {
    for(int j = 0; j < str.size() - 1; j++) {
      if(str[j] < str[j + 1]) {
        int temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }

  cout << str << endl;


  // 다른 풀이
  // cin >> str;

  // sort(str.begin(), str.end(), greater<char>());
  // cout << str << endl;
}