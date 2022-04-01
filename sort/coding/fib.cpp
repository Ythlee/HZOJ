#include <iostream>

using namespace std;

long long ans[100] = {1, 1, 1};

/* 递归 */
long long func(int n)
{
    if(n == 1 || n == 2) return 1;
    else return func(n - 1) + func(n - 2);
}

/* 记忆化递归 */
long long func2(int n)
{
    if(n == 1 || n == 2) return 1;
    if(ans[n] != 0)return ans[n];

    return ans[n] = func2(n - 1) + func2(n - 2);

}
int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    //cout << func(n) << endl;
    // 递推
    for(int i = 3; i <= n; i++) {
        ans[i] = ans[i - 1] + ans[i - 2];
    }
    cout << ans[n] << endl;

    return 0;
}
