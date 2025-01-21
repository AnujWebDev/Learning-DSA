#include <iostream>
using namespace std;
#include <vector>

bool Valid(int i, int j, int n) {
    return i >= 0 && j >= 0 && i < n && j < n;
}

int Row[4] = {-1, 1, 0, 0};
int Col[4] = {0, 0, -1, 1};
string Dir = "UDLR";

void TotalWaysForRat(vector<vector<int>> Matrix, int i, int j, int n, string &path, vector<string> &ans, vector<vector<int>> &visited) {
    if (i == n - 1 && j == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[i][j] = 1;
    for (int k = 0; k < 4; k++) {
        if (Valid(i + Row[k], j + Col[k], n) && Matrix[i + Row[k]][j + Col[k]] && !visited[i + Row[k]][j + Col[k]]) {
            path.push_back(Dir[k]);
            TotalWaysForRat(Matrix, i + Row[k], j + Col[k], n, path, ans, visited);
            path.pop_back();
        }
    }
    visited[i][j] = 0;
}

int main() {
    vector<vector<int>> Matrix = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };
    vector<string> ans;
    string path;
    vector<vector<int>> visited(4, vector<int>(4, 0));

    TotalWaysForRat(Matrix, 0, 0, Matrix.size(), path, ans, visited);

    for (int i = 0; i < ans.size();i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
