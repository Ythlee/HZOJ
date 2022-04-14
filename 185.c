#include <stdio.h>

int digui(int n)
{
    if(n == 1) return 1;
    if(n == 2) return 1;
    else {
        return digui(n - 1) + digui(n - 2);
    }
}

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d\n", digui(n));
    return 0;
}
