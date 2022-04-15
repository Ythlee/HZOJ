#include <stdio.h>
#include <stdlib.h>

void init(int prime[], int n)
{
    for (int i = 2; i <= n; ++i) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i * 2; j <= n; j += i) {
            prime[j] = 1;
        }
    }
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int *prime = (int *)malloc(sizeof(int) * n + 5);
    init(prime, n);
    for (int i = 1; i <= prime[0]; ++i) {
        if (prime[i] < m) continue;
        printf("%d\n", prime[i]);
    }
    free(prime);
    return 0;
}
