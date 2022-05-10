#include <iostream>

using namespace std;

#define MAX_N 100
#define INF 0x3f3f3f3f

int val[MAX_N + 5][MAX_N + 5]; //花盆漂亮值
int dp[MAX_N + 5][MAX_N + 5]; //前i种花放在前j种花瓶得到的最大漂亮值
int pos[MAX_N + 5][MAX_N + 5]; //花摆放的最大花瓶编号
int ans[MAX_N + 5]; //第i种花放置的花盆编号

int main()
{
    int n, v;
    cin >> n >> v;
    for (int i = 1; i <= n; ++i) {
        dp[i][0] = -INF;
        for (int j = 1; j <= v; ++j) {
            cin >> val[i][j];
            dp[i][j] = -INF;
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= v; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1] + val[i][j], dp[i][j - 1]);
            //决策 i种花                 放入第j个花瓶   不放入第j个花瓶
            pos[i][j] = (dp[i - 1][j - 1] + val[i][j] > dp[i][j - 1] ?
                         j : pos[i][j - 1]);
        }
    }
    cout << dp[n][v] << endl;
    for (int i = n, j = pos[n][v]; i >= 1; i--, j = pos[i][j - 1])
        ans[i] = j;
    for (int i = 1; i <= n; ++i) {
        (i - 1) && cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
