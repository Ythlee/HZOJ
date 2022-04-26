#include <stdio.h>

int m, n;

int main(int argc, char *argv[])
{
    int a, b;
    scanf("%d %d", &m, &n);

    a = m / n;
    b = m % n;
    if(b != 0) {
        printf("%d\n", a + 1);
    } else
        printf("%d\n", a);


    return 0;
}
