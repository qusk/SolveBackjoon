#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int k;
  cin >> k;

  for(int c = 1; c <= k; c++) {
    int N;
    cin >> N;
    vector<int> scores(N);
    for(int i = 0; i < N; i++) {
      cin >> scores[i];
    }
    sort(scores.begin(), scores.end(), greater<int>());

    int max_score = scores[0];
    int min_score = scores[N - 1];

    int largest_gap = 0;
    for(int i = 0; i < N - 1; i++) {
      int gap = scores[i] - scores[i + 1];
      if(gap > largest_gap) largest_gap = gap;
    }
    cout << "Class " << c << endl;
    cout << "Max " << max_score << "," << "Min " << min_score << "," << "Largest gap " << largest_gap << endl;
  }
  return 0;
}