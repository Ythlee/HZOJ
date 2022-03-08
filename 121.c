#include <stdio.h>

int main(int argc, char *argv[])
{
    char a, b;
    scanf("%c %c", &a, &b);

    if(a == b) {
        printf("TIE\n");
    } else if ((a == 'Y' && b == 'H') || (a == 'H' && b == 'O') || (a == 'O' && b == 'Y')) {
        printf("MING\n");
    } else if ((b == 'Y' && a == 'H') || (b == 'H' && a == 'O') || (b == 'O' && a == 'Y')) {
        printf("LI\n");
    }

    return 0;
}
