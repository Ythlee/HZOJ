#include <stdio.h>
#include <stdlib.h>

void init(int p[], int n)
{
    for (long long i = 2; i <= n; ++i) {
        if(!p[i]) p[++p[0]] = i;
        for (int j = 1; j <= p[0]; ++j) {
            if (i * p[j] > n) break;
            p[p[j] * i] = 1;
            if (i % p[j] == 0) break;
        }
    }
}

int bs(int p[], int n)
{
    int head = 1, tail = p[0], mid;
    while (head <= tail) {
        mid = (head + tail) / 2;
        if (p[mid] == n) return 1;
        if (p[mid] > n) tail = mid - 1;
        if (p[mid] < n) head = mid +  1;
    }
    return 0;
}

int main()
{
    int n, ans = 0;;
    scanf("%d", &n);
    if (n < 5) {
        printf("0");
        return 0;
    }
    int *prime = (int *)malloc(sizeof(int) * (n + 5));
    init(prime, n);
    int *p = &prime[prime[0]];
    while (*p >= n / 2) {
        if (bs(prime, n - * (p--))) {
            ans++;
        }
    }
    printf("%d", ans);
    free(prime);
    return 0;
}
