#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hash[1001] = {0}, a[1001], n, i, d;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++) {
        d = abs(a[i] - a[i - 1]);
        if (d <= n - 1)
            hash[d] = 1;
    }

    for (i = 1; i <= n - 1; i++)
        if (hash[i] == 0) break;

    if (i < n)
        printf("Not jolly");
    else
        printf("Jolly");

    return 0;

}
