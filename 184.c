#include <stdio.h>

int digui(int num)
{
    if(num == 1) return 1;
    else {
        return (digui(num - 1) + 1) * 2;
    }
}

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d\n", digui(n));
    return 0;
}
