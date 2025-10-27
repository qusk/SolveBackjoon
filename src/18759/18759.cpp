#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
  int N ,M;
  cin >> N >> M;

  long long total_cost = 0;
  int cost_value;

  for(int i = 0; i < N; i++) 
  {
    cin >> cost_value;
    total_cost += cost_value;
  }

  for(int i = 0; i < M; i++) 
  {
    cin >> cost_value;
    total_cost += cost_value;
  }

  cout << total_cost << endl;
}