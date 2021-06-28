#include <bits/stdc++.h>
#define ll long long
#define mod 1e9 + 7
using namespace std;
class Solution {
   public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int top = 0, left = 0, down = grid.size() - 1, right = grid[0].size() - 1;
        while (top < down && left < right) {
            int kk = (down - top) * 2 + (right - left) * 2;
            int kkk = k % kk;
            while (kkk--) {
                int topleft = grid[top][left], downleft = grid[down][left], topright = grid[top][right], downright = grid[down][right];
                for (int i = left; i < right; i++) {
                    grid[top][i] = grid[top][i + 1];
                }

                for (int j = down; j > top; j--) {
                    grid[j][left] = grid[j - 1][left];
                }

                for (int i = right; i > left; i--) {
                    grid[down][i] = grid[down][i - 1];
                }

                for (int j = top; j < down; j++) {
                    grid[j][right] = grid[j + 1][right];
                }

                grid[top + 1][left] = topleft;
                grid[down][left + 1] = downleft;
                grid[down - 1][right] = downright;
            }
            top++;
            left++;
            down--;
            right--;
        }

        return grid;
    }
};
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    return 0;
}
