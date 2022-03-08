#include <stdio.h>

int main(int argc, char *argv[])
{
    char a, b, c, d;
    scanf("%c %c", &a, &b);
	getchar();
    scanf("%c %c", &c, &d);
	getchar();

    if((a == 'Y' && c == 'H') || (a == 'O' && c == 'Y') || (a == 'H' && c == 'O')) {
        if((a == 'Y' && d == 'H') || (a == 'O' &&  d == 'Y') || (a == 'H' && d == 'O') || (a == d)) {
            printf("MING\n");
        }
        if((a == 'Y' && d == 'O') || (a == 'O' &&  d == 'H') || (a == 'H' && d == 'Y')) {
            if((b == 'Y' && d == 'H') || ((b == 'O' &&  d == 'Y') || (a == 'H' && d == 'O'))) {
                printf("MING\n");
            } else if((b == 'Y' && d == 'O') || ((b == 'O' &&  d == 'H') || (b == 'H' && d == 'Y')) || b == d) {
                printf("LIHUA\n");
            }
        }
    } else if(a == c) {
        if((b == 'Y' && d == 'H') || (b == 'H' && d == 'O') || (b == 'O' && d == 'Y')) {
            printf("MING\n");
        } else if ((d == 'Y' && b == 'H') || (d == 'H' && b == 'O') || (d == 'O' && b == 'Y')) {
            printf("LIHUA\n");
        } else if(b == d) {
            printf("TIE\n");
        }
    } else if((a == 'H' && c == 'Y') || (a == 'Y' && c == 'O') || (a == 'O' && c == 'Y')) {
        if((b == 'Y' && c == 'O') || (b == 'O' &&  c == 'H') || (b == 'H' && c == 'Y') || (b == c)) {
            printf("LIHUA\n");
        } else if((c == 'Y' && b == 'O') || (c == 'O' &&  b == 'H') || (c == 'H' && c == 'Y')) {
            if((d == 'Y' && b == 'O') || (d == 'O' &&  b == 'H') || (d == 'H' && b == 'Y') || (b == d)) {
                printf("MING\n");
            } else if((b == 'Y' && d == 'O') || (b == 'O' &&  d == 'H') || (b == 'H' && d == 'Y')) {
                printf("LIHUA\n");
            }
        }
    }

    return 0;
}
