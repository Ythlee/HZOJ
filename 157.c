#include<stdio.h>

void graph(int n)
{
    //上半部分
    for (int i = n; i > 0; i--) {
        for (int j = 0 ; j < 2 * i - 1; j++) {
            for (int k = n; k > i; k--) {
                if (j == 0)
                    printf(" ");
            }
            if (j < i)
                printf("%c", 'A' + n - i + j);
            else
                printf("%c", 'A' + n - 2 - j + i);
        }
        printf("\n");
    }
    //下半部分
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 2 * i + 1; j ++) {
            for (int k = n - i - 1; k > 0; k--) {
                if (j == 0)
                    printf(" ");
            }
            if (j <= i)
                printf("%c", 'A' + n - i - 1 + j);
            else
                printf("%c", 'A' + n - 1 - j + i);
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
