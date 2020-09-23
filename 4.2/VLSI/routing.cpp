#include<bits/stdc++.h>
#define sz 9
#define sz1 9
using namespace std;
int arr[sz1][sz];
int s = 0;
vector<pair<int, int>> sol;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int main() {    
    auto print = [&]() {
        for (int i = 0; i < sz1; ++i) {
            for (int j = 0; j < sz; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    };
    auto inside = [&](int x, int y) {
        return (x>= 0 and x < sz1 and y >= 0 and y < sz);
    };
    auto init = [&]() {
        for (int i = 0; i < sz1; ++i) {
            for (int j = 0; j < sz; ++j) {
                arr[i][j] = 0;
            }
        }
        auto set_ = [&]() {    
            // Start
            // arr[1][4] = 0;
            arr[2][1] = 0;
            // Obstacles
            // arr[3][1] = 100;
            // arr[3][2] = 100;
            // arr[3][3] = 100;
            // arr[1][6] = 100;
            // arr[2][6] = 100;
            // arr[5][4] = 100;
            // arr[5][5] = 100;
            // arr[5][6] = 100;
            // arr[5][7] = 100;
            arr[4][1] = arr[4][2] = arr[4][3] = arr[4][4] = arr[4][5] = 100;
            arr[2][5] = arr[3][5] = arr[4][5] = arr[5][5] = arr[6][5] = 100;
            // Destination
            // arr[8][7] = 100;
            arr[6][6] = 99;
        };
        set_();
        queue<pair<int, int>> Q;
        Q.push({2, 1});
        while (!Q.empty()) {
           pair<int, int> pr = Q.front();
           Q.pop();
           for (int i = 0; i < 4; ++i) {
               int x = dx[i] + pr.first;
               int y = dy[i] + pr.second;
               // cout << "(" << pr.first << "," << pr.second << ")" << " " << "("<< x << "," << y << ")" << endl;
               if (inside(x, y) and !arr[x][y]) {
                   arr[x][y] = arr[pr.first][pr.second] + 1;
                   Q.push({x, y});
               }
           }
        }
        arr[2][1] = 0;
    };
    function<void(int, int, int, int)> backtrack = [&](int x, int y, int px, int py) {
        // cout << "(" << px << "," << py << ") ==> " << "(" << x << "," << y << ") : " << arr[x][y]<< endl;
        if (!inside(x, y)) {
            return;
        }
        if (arr[x][y] > arr[px][py]) {
            // cout << arr[x][y] << " " << arr[px][py] << endl;
            // cout << "GT" << endl;
            return;
        }
        if (arr[x][y] == 0) {
            cout << "sol :"<< ++s << endl;
            for (int i = 0; i < (int) sol.size(); ++i) {
                cout << "(" << sol[i].first << "," << sol[i].second << ") ==> ";
            }
            cout << endl;
            return;
        }
        for (int i = 0; i < 4; ++i) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            sol.push_back({nx, ny});
            backtrack(nx, ny, x, y);
            sol.pop_back();
        }
    };
    init();
    print();
    backtrack(8, 7, 8, 7);
    return 0;
}
