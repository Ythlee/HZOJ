#include <stdio.h>

int main(void)
{
    long n ;
    scanf("%ld", &n);

    printf("%ld", n * (1 + n) / 2);
    return 0;
}
