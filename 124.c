#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if(((a > 0) || (b <= 50)) && ((c <= 25) || (d >= 5))) {
        printf("ok\n");
    } else {
        printf("pass\n");
    }

    return 0;
}
