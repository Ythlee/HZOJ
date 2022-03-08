#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            j != n && printf("%d*%d=%d\t", i, j, i * j);
            if(j == n) printf("%d*%d=%d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
