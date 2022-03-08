#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int x = 1;
    long long m = 1;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        m = x * m;
    }
    printf("%lld\n", m);
    return 0;
}
