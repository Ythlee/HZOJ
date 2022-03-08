#include <stdio.h>

int main(int argc, char *argv[])
{
    double n;
    scanf("%lf", &n);
    if(n < 0) {
        n = -n;
    }
    printf("%g", n);
    return 0;
}
