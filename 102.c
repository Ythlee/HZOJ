#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c, t;
    float time;
    scanf("%d%d%d%d", &a, &b, &c, &t);

    double ans = a * b * c - (b * c + a * c) * t;
    double ans2 = b * c + a * c - a * b;

	time = ans / ans2 + t;
    printf("%.2f\n", time);

    return 0;
}
