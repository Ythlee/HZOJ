#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0, m = 2 * n - i * 2; j < m; j++)
            printf("A");
        printf("\n");
    }
    return 0;
}
