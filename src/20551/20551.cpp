#include <iostream>
#include <vector>
#include <algorithm>>

using namespace std;

int main() {

  int N, M;
  cin >> N >> M;

  vector<int> A(N);

  for(int i = 0; i < N; i++) {
    cin >> A[i];
  }


  sort(A.begin(), A.end());

  for(int i = 0; i < M; i++) {
    int D;
    cin >> D;

    // 여기서 쓰인 auto는 iterator 타입, iterator 타입은 컨테이너(vector) 안에서 원소를 가리키고 그 원소를 읽거나 수정할 수 있게 해주는 포인터 같은 객체이다.
    auto it = lower_bound(A.begin(), A.end(), D);

    if(it != A.end() && *it == D) {
      cout << it - A.begin() << '\n';
    }else {
      cout << -1 <<'\n';
    }
  }
  return 0;
}