#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    double pi = acos(-1);
    double a2 = pow(a, 2);
    double b2 = pow(b, 2);
    double a2b = (double)a * b * 2.0;
    double cosc = cos(pi * 1.0 / 180.0 * (double)c);
    printf("%.6lf", sqrt(a2 + b2 - a2b * cosc));
    return 0;
}
