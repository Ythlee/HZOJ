#include <stdio.h>

int num[205][205];

int main(int argc, char *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    for(int j = 0; j < m; j++) {
        for(int i = n - 1; i >= 0; i--) {
            printf("%d", num[i][j]);
            i && printf(" ");
        }
        printf("\n");
    }

    return 0;
}
