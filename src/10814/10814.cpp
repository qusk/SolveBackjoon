#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<int, string>> members(N);

  for(int i = 0; i < N; i++) {
    cin >> members[i].first >> members[i].second;
  }
  
  // stable_sort 정렬기준이 동일한 경우 원래 입력 순서를 유지
  // [](const auto &a, const auto &b) { return a.first < b.first; }); 람다 함수 []는 캡쳐리스트 람다 함수를 쓸 때 필수임
    
  stable_sort(members.begin(), members.end(), [](const auto &a, const auto &b) {
    return a.first < b.first;
  });

  for(const auto &member : members) {
    cout << member.first << " " << member.second << '\n';
  }

  return 0;
}