#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<string> words(N);
  for(int i = 0; i < N; i++) {
    cin >> words[i];
  }

  // 중복제거를 위한 정렬
  sort(words.begin(), words.end());

  // 중복제거
  // unique를 사용하려면 반드시 정렬!
  // unique로 중복된 것을 다 뒤로 보낸 후 끝 위치 기억
  // erase로 끝 위치부터 지움
  words.erase(unique(words.begin(), words.end()), words.end());

  sort(words.begin(), words.end(), [](const auto &a, const auto &b) {
    if(a.length() != b.length()) {
      return a.length() < b.length();
    }
    return a < b;
  });

  for(const auto& word : words) {
    cout << word << '\n';
  }
  return 0;
}