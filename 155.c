#include <stdio.h>

int n;

int main(int argc, char *argv[])
{
    int d = 2, num = 3, sum = 0;
    scanf("%d", &n);

    while(n--) {
        printf("%d\n", num);
        sum += num;
        num += d;
        d += 2;
    }
    printf("%d\n", sum);

    return 0;
}
