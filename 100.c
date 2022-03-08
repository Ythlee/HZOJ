#include <stdio.h>

#define RATE 0.00417

int main(int argc, char *argv[])
{
    int n;
    double  m = 0.0;
    scanf("%d", &n);
    for(int i = 0; i < 6; i++) {
        m = (n + m) * (1 + RATE);
    }
    printf("$%.2f\n", m);

    return 0;
}
