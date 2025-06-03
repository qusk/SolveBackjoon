#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    
    cin >> n >> m;

    vector<string> castle(n);
    for(int i = 0; i < n; ++i) {
        cin >> castle[i];
    }

    int row_count = 0, col_count = 0;
    // 행 검사
    for(int i = 0; i < n; ++i) {
        bool has_guard = false;
        for(int j = 0; j < m; ++j) {
            if(castle[i][j] == 'X') {
                has_guard = true;
                break;
            }
        }
        if(!has_guard) {row_count++;}
    }

    for(int j = 0; j < m; ++j) {
        bool has_guard = false;
        for(int i = 0; i < n; ++i) {
            if(castle[i][j] == 'X') {
                has_guard = true;
                break;
            }
        }
        if(!has_guard) {col_count++;}
    }

    cout << max(row_count, col_count) << endl;
    return 0;
}