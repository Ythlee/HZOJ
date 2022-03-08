#include <stdio.h>

int main(int argc, char *argv[])
{
    int k, m;
    scanf("%d%d", &k, &m);
    int a[10];
    int f[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        f[i] = i;
    }

    for(int i = 10; i <= k; i++)
    {
        int t = 0;
        for(int j = 0; j < 10; j++)
        {
            t += a[j] * f[(i - j - 1) % 10] % m;
        }
        f[i % 10] = t;
    }
    printf("%d\n", f[k % 10] % m);
    return 0;
}
