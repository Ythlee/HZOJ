#include <stdio.h>
#include <stdlib.h>

void fn(double a, double b, int n)
{
    double sum = a / b;
    while (n-- > 1) {
        int t = a;
        a = b;
        b = t + b;
        sum += a / b;
    }
    printf("%.0lf/%.0lf\n%.2lf", a, b, sum);
}

int main()
{
    int n;
    double a = 4.0, b = 7.0;
    scanf("%d", &n);
    fn(a, b, n);
    return 0;
}
