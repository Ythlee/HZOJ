#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf%lf", &a, &b);
    c = a * 2 + b * 2;
    printf("%.2f\n", c);
    c = a * b;
    printf("%.2f\n", c);
    return 0;
}
