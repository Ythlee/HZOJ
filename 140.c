#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for(int j = 0; j < 2 * i + 1; j++) {
            printf("%c", 'A' + i);
        }
        printf("\n");
    }
    for(int i = n - 1; i > 0; i--) {
        for(int j = 0; j <= n - i - 1; j++) {
            printf(" ");
        }
        for(int j = 0; j < 2 * i - 1; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}
