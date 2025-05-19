#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int repaint(char start_coler, int x, int y, const vector<string>& BOARD) {
    int repaint_count = 0;

    for(int i = 0; i < 8; ++i) {
        for(int j = 0; j < 8; ++j) {
            char expected_color = ((i + j) % 2 == 0) ? start_coler : (start_coler == 'W' ? 'B' : 'W');
            if(BOARD[x + i][y + j] != expected_color) {
                repaint_count++;
            }
        }
    }
    return repaint_count;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> board(n);
    for(int i = 0; i < n; ++i) {
        cin >> board[i];
    }

    // n - 8을 하는 이유는 8 * 8 체스판이기 떄문에 8을 넘지 않게 하기 위해서
    // i는 행, j는 열
    int min_repaint = 64;
    for(int i = 0; i <= n - 8; ++i) {
        for(int j = 0; j <= m - 8; ++j) {
            int repaint_count_W = repaint('W', i, j, board);
            int repaint_count_B = repaint('B', i, j, board);
            // {}를 쓴 이유 3개를 비교하기 위해서
            min_repaint = min({min_repaint, repaint_count_W, repaint_count_B});
        }
    }

    cout << min_repaint << endl;


    return 0;
}