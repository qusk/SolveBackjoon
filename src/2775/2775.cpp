#include <iostream>

using namespace std;

int main() {

  int T;
  cin >> T;

  int people[15][15] = {0};

  for(int i = 1; i < 15; i++) {
    people[0][i] = i;
  }

  for(int k = 1; k < 15; k++) {
    for(int n = 1; n < 15; n++) {
      people[k][n] = people[k-1][n] + people[k][n-1];
    }
  }

  for(int t = 0; t < T; t++) {
    int k, n;
    cin >> k >> n;

    cout << people[k][n] << endl;
  }
  return 0;
}

// DP누적합 : 어떤 값들의 합을 순차적으로 더해서 저장하는 방식
// 목적: 중복 계싼 없이 합을 빠르게 계산
// 형태 dp[i][j] = dp[i][j-1] + dp[i+1][j]
// 조건 누적된 값과 새로운 값을 한 번만 더함
// 효과 O(N^2) -> O(N) 수준