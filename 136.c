#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    if(n < 7)return 0;
    else {
        for(int i = 7, j = 2; i <= n; i = 7 * j, j++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
