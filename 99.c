#include <stdio.h>

int main(int argc, char *argv[])
{
    double v, a;
    scanf("%lf%lf", &v, &a);

    printf("%.2lf", (v * v) / (2 * a));

    return 0;
}
