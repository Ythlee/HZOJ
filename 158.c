#include<stdio.h>

void graph(int n)
{
    for (int i = n; i >= 0; i--) {
        for (int j = 2 * i + 1; j > 0; j--) {
            for (int k = 0; k < n - i; k++) {
                if (j == 2 * i + 1)
                    printf(" ");
            }
            printf("%d", i);
            for (int l = 0; l < 2 * i - 1; l++)
                printf(" ");
            if (i != 0)
                printf("%d", i);
            break;
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < 2 * i + 1; j++) {
            for (int k = n - i; k > 0; k--) {
                if (j == i)
                    printf(" ");
            }
            printf("%d", i);
            for (int l = 0; l < 2 * i - 1; l++)
                printf(" ");
            printf("%d", i);
            break;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    graph(n);
    return 0;
}

