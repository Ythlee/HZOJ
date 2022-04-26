#include <stdio.h>
#define MAX_LEN 8000000
int prime[MAX_LEN + 5] = {0};

void init()
{
    for (int i = 2; i <= MAX_LEN; ++i) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; ++j) {
            if (i * prime[j] > MAX_LEN) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
}

int main()
{
    int l, r, p = 0, pn = 0;
    int d = 0, dmin = 10000, dmax = 1;
    scanf("%d%d", &l, &r);
    init();
    int pmax = 0, pnmax = 0;
    int pmin = 0, pnmin = 0;
    for (int i = 2; i <= prime[0]; ++i) {
        if (prime[i] > r) break;
        pn = prime[i];
        p = prime[i - 1];
        if (p < l) continue;
        d = pn - p;
        if (d > dmax) {
            dmax = d;
            pmax = p;
            pnmax = pn;
        }
        if (d < dmin) {
            dmin = d;
            pmin = p;
            pnmin = pn;
        }
    }
    if (pmin == 0 || pnmin == 0 || pmax == 0 || pnmax == 0) {
        printf("There are no adjacent primes.");
    } else {
        printf("%d,%d are closest, %d,%d are most distant.", pmin, pnmin, pmax, pnmax);
    }
    return 0;
}
