#include <stdio.h>
#include <math.h>

int a, b, qb, sg;
int m, n, count;


int main(int argc, char *argv[])
{
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++ ) {
        for(int j = 2; j <= i; j++) {
            if(j == i) {
                qb = i / 100;
                sg = i % 100;
                m = sqrt(qb);
                n = sqrt(sg);
                if((m * m == qb) && (n * n == sg)) {
                    if(count != 0) printf(" ");
                    printf("%d", j);
                    count++;
                }
                break;
            }
            if(i % j == 0) {
                break;
            }

        }
    }
    printf("\n%d\n", count);

    return 0;
}
