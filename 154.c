#include <stdio.h>

int n;

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    while(n) {
        for(int i = n; i > 0; i--) {
            printf("%d", i);
            if(i != 1)printf(" ");
        }
        n--;
        printf("\n");
    }
    return 0;
}
