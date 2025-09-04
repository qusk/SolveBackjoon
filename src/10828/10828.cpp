#include <iostream>
#include <string>
#include <stack>

using namespace std;


// stack 컨테이너를 사용하지 않고 직접 구현
// int main() {

//   int N;
//   cin >> N;

//   int stack[10000];
//   int top = -1;

//   while(N--) {
//     string command;
//     cin >> command;

//     if(command == "push") {
//         int x;
//         cin >> x;
//         stack[++top] = x;
//     }else if(command == "pop") {
//       if(top == -1) {
//         cout << -1 << '\n';
//       }else {
//         cout << stack[top--] << '\n'; 
//       }
//     }else if(command == "size") {
//       cout << top + 1 << '\n';
//     }else if (command == "empty") {
//       cout << (top == -1 ? 1 : 0) << '\n';
//     }else if(command == "top") {
//       if(top == -1) {
//         cout << -1 << '\n';
//       }else {
//         cout << stack[top] << '\n';
//       }
//     }
//   }
//   return 0;
// }

// 스택 컨테이너 사용
int main() {

  int N;
  cin >> N;

  stack<int> s;

  while(N--) {
    string command;
    cin >> command;

    if(command == "push") {
      int x;
      cin >> x;
      s.push(x);
    }else if(command == "pop") {
      if(s.empty()) {
        cout << -1 << '\n';
      }else {
        cout << s.top() << '\n';
        s.pop();
      }
    }else if(command == "size") {
      cout << s.size() << '\n'; 
    }else if(command == "empty") {
      if(s.empty()) {
        cout << 1 << '\n';
      }else {
        cout << 0 << '\n';
      }
    }else if(command == "top") {
      if(s.empty()) {
        cout << -1 << '\n';
      }else {
        cout << s.top() << '\n';
      }
    }
  }
  return 0;
}
  
