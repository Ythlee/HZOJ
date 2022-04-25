#include <stdio.h>

double x;
int n;

int main(int argc, char *argv[])
{
    scanf("%lf %d", &x, &n);
    for(int i = 0; i < n; i++) {
        x = (x * (1 + 0.06));
    }
    printf("%.6lf\n", x);
    return 0;
}
