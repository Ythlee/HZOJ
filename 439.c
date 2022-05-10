#include <stdio.h>

int count;
double x, y = 0, a = 2;


int main(int argc, char *argv[])
{
    scanf("%lf", &x);
    while(y < x) {
        y += a;
        a *= 0.98;
        count++;
    }

    printf("%d\n", count);
    return 0;
}
