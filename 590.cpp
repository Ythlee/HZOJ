#include <iostream>
#include <cstdio>

using namespace std;

int m, n, sec[1005], ind[1005], num[1005][1005], utd[1005][1005], dtu[1005][1005], ans[1005][1005];

int main(int argc, char *argv[])
{
    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            utd[i][j] = max(utd[i - 1][j], utd[i - 1][j - 1]) + num[i][j];
        }
    }
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= i; j++) {
            dtu[i][j] = max(dtu[i + 1][j], dtu[i + 1][j + 1]) + num[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            ans[i][j] = utd[i][j] + dtu[i][j] - num[i][j];
        }
    }

    for(int i = 2; i <= n; i++) {
        int m1 = 0, m2 = 0, indx = 0;
        for(int j = 1; j <= i; j++) {
            if(m1 < ans[i][j]) {
                m2 = m1;
                m1 = ans[i][j];
                indx = j;
            } else if(m2 < ans[i][j]) {
                m2 = ans[i][j];
            }
        }
        sec[i] = m2;
        ind[i] = indx;
    }

    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a == 1)printf("-1\n");
        else if(b == ind[a]) {
            printf("%d\n", sec[a]);
        } else {
            printf("%d\n", dtu[1][1]);
        }
    }

    return 0;
}
