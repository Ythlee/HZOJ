#include <stdio.h>

int a, b;

int main(int argc, char *argv[])
{
    scanf("%d %d", &a, &b);
    a = a * 10 + b;
    printf("%d\n", a / 26);
    return 0;
}
