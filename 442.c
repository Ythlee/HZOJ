#include <stdio.h>

int n;

int main(int argc, char *argv[])
{
    int a = 1, b = 2, c;
    scanf("%d", &n);
    if(n >= 1) {
        printf("1");
	}
    if(n >= 2) {
        printf(" 2");
    }
    for(int i = 3; i <= n; i++) {
        if((i & 1) == 0) {
            b = a + b;
            printf(" %d", b);
        } else {
            a = a + b;
            printf(" %d", a);
        }
    }

    return 0;
}
