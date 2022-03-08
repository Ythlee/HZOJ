#include <stdio.h>
#define PI 3.14

int main()
{
    double r1, r2;
    double  S;

    scanf("%lf%lf", &r1, &r2);
    S = (PI * r1 * r1) - (PI * r2 * r2);
    printf("%.2lf", S);
    return 0;
}
