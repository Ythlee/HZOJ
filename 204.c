#include <stdio.h>

int num[35][35];

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    for(int i = 1 ; i <= n; i++) {
        printf("%d\n", num[i][i]);
    }
    return 0;
}
