#include <stdio.h>

int num[35][35];
int sum[35];

int main(int argc, char *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum[i] += num[j][i];
        }
        printf("%d\n", sum[i]);
    }
    return 0;
}
