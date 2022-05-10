#include <stdio.h>

int x, y;

int main(int argc, char *argv[])
{
    int a = 0;
    scanf("%d %d", &x, &y);
    while(y--) {
        if(((x % 7) <= 5) && ((x % 7) != 0)) {
            a += 2;
            x++;
        } else {
            x++;
        }
    }
    printf("%d\n", a);
    return 0;
}
