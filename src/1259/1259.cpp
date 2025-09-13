#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

  string s;

  while(true) {
    cin >> s;
    
    if(s == "0") break;

    string rev = s;
    reverse(rev.begin(), rev.end());

    if(s == rev) {
      cout << "yes" << '\n';
    } else {
      cout << "no" << '\n';
    }
  }
  return 0;
}