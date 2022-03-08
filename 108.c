#include <stdio.h>

int main(int argc, char *argv[])
{
    char a;
    double m, n, s;

    scanf("%c", &a);
    if('r' == a) {
        scanf("%lf%lf", &m, &n);
        s = m * n;
        printf("%.2lf\n", s);
    } else if('t' == a) {
        scanf("%lf%lf", &m, &n);
        s = m * n / 2;
        printf("%.2lf\n", s);
    }

    return 0;
}
