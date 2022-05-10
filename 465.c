#include<stdio.h>

long long digit(long long n, long long k)
{
    int i, t;
    for(i = 1; i <= k; i++) {
        t = n % 10;
        n = n / 10;
    }
    return t;
}


int main()
{
    long long n, k, t;
    scanf("%lld %lld", &n, &k);
    t = digit(n, k);
    printf("%lld\n", t);
}
