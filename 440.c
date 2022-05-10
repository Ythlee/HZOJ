#include<stdio.h>

int main()

{
    int i, j, n, x, k = 0;
    char *a;

    scanf("%d %d", &n, &x);

    for(i = 1; i <= n; i++)
        for(j = i; j; j /= 10)
            if(j % 10 == x)k++;

    printf("%d\n", k);

    return 0;

}
