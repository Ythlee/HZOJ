#include <stdio.h>

int a, b;
int main(int argc, char *argv[])
{
    scanf("%d%d", &a, &b);

    if(a % 2 == 0) {
        if(a < 0) a = 0;
        while(b--) {
            printf("%d\n", a);
            a += 2;
        }
    } else if(a < 0) {
        a = 0;
        while(b--) {
            printf("%d\n", a += 2);
        }
    } else if(a % 2 == 1) {
        a += 1;
        while(b--) {
            printf("%d\n", a);
            a += 2;
        }

    }
    return 0;
}
