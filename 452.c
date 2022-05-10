#include<stdio.h>

int a[10001];

int main()
{
    int n, i, j, temp, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                sum++;
            }
        }
    }
    printf("%d", sum);
    return 0;
}
