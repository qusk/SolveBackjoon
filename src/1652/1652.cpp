#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
  // 방 갯수
  int n;
  // 가로 자리 갯수, 세로 자리 갯수
  int horizontal_spot = 0;
  int vertical_spot = 0;
  cin >> n;

  // 배열 선언
  vector<string> room(n);

  for(int i = 0; i < n; i++) 
  {
    cin >> room[i];
  }

  

  // 가로 누을 자리 찾기
  for(int i = 0; i < n; i++) 
  {
    int empty_spot = 0;
    for(int j = 0; j < n; j++) 
    {
      if(room[i][j] == '.') { empty_spot++;}
      else 
      {
        if(empty_spot >= 2) { horizontal_spot++; }
        empty_spot = 0;
      }
    }
    // X를 만나지 못하고 루프가 종료되고 empty_spot이 2 이상일 경우가 있기 떄문에 마지막에 다시 검사해준다.
    // X를 만나지 못하면 horizontal_spot + 1을 하지 않기 때문에
    if(empty_spot >= 2) { horizontal_spot++; }
  }
  // 세로 누을 자리 찾기

  for(int i = 0; i < n; i++) 
  {
    int empty_spot = 0;
    for(int j = 0; j < n; j++) 
    {
      if(room[j][i] == '.') { empty_spot++; }
      else 
      {
        if(empty_spot >= 2) { vertical_spot++; }
        empty_spot = 0;
      }
    }
    if(empty_spot >= 2) { vertical_spot++; }
  }

  cout << horizontal_spot << " " << vertical_spot << endl;
  return 0;
}