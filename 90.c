#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a / 100);
    printf("%d\n", a / 10 % 10);
    printf("%d\n", a % 100 % 10);
    return 0;
}
