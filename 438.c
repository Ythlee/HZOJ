#include <stdio.h>

int n;
double m;

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    if(n <= 240) {
        m = n * 0.4783;
    } else if(240 < n && n <= 400) {
        m = (n - 240) * 0.5283 + 240 * 0.4783;
    } else if(400 < n ) {
        m = (n - 400) * 0.7783 + 160 * 0.5283 + 240 * 0.4783;
    }
    printf("%.1lf", m);
    return 0;
}
