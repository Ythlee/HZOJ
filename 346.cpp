#include <iostream>

using namespace std;

#define max_n 50
#define max_m 50
#define max_k 100
int mat[max_n + 5][max_m + 5];
int dp[max_k + 5][max_n + 5][max_m + 5];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> mat[i][j];
        }
    }
    for (int k = 1; k <= (n + m - 1); ++k) {
        0 && cout << "k = (" << k << ") ";
        int vi = 0, vj = 0, vnow = 0;
        for (int i = 1; i <= min(n - 1, k - 1); ++i) {
            0 && cout << "i: (" << i << ", " << k - i << ") ";
            for (int j = i + 1; j <= min(n, k - 1); ++j) {
                if ((k - i < 0) || (k - i > m) || (k - j < 0) || (k - j > m)) continue;
                0 && cout << "j: (" << j << ", " << k - j << ") ";
                vi = mat[i][k - i];
                vj = mat[j][k - j];
                int tmp_max = max(dp[k - 1][i - 1][j], dp[k - 1][i][j - 1]);
                int tmp_mmx = max(dp[k - 1][i - 1][j - 1], dp[k - 1][i][j]);
                dp[k][i][j] = max(tmp_max, tmp_mmx) + vi + vj;
            }
        }
        0 && cout << "\n";
    }

    cout << dp[m + n - 1][n - 1][n] << endl;
    return 0;
}
