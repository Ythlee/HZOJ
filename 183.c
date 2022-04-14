#include <stdio.h>

long digui(int x)
{
    if(x <= 0) return 0;
    if(x == 1) return 1;
    if((x > 1) && (x % 2 == 0)) {
        return 3 * digui(x / 2) - 1;
    }
    if((x > 1) && (x % 2 == 1)) {
        return 3 * digui((x + 1) / 2) - 1;
    }
    return -1;
}


int main(int argc, char *argv[])
{
    int x;
    scanf("%d", &x);
    printf("%ld\n", digui(x));
    return 0;
}
