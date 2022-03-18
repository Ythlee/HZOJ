#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int num = 0;
    int i, j;
    for ( i = a; i <= b; i++) {
        for ( j = 2; j <= sqrt(i) ; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > sqrt(i) ) {
            int n1 = i / 10000;
            int n2 = (i % 10000) / 1000;
            int n3 = ((i % 10000) % 1000) / 100;
            int n4 = (((i % 10000) % 1000) % 100) / 10;
            int n5 = (((i % 10000) % 1000) % 100) % 10;
            if (n1 == n5 && n2 == n4) {
                num++;
                if (num != 1) {
                    printf(" ");
                }
                printf("%d", i);
            }
        }
    }

    return 0;
}
