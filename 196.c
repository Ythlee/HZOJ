#include <stdio.h>

int digui(int n)
{
    if(n <= 4)return 1;
    else {
        return digui(n - 2) + digui(n - 3);
    }
}

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d\n", digui(n));

    return 0;
}
