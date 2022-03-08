#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, m;
    scanf("%d", &n);
    for(int i = 0; i < 4; i++) {
        m = n % 10;
        if(m % 2 == 0) {
            printf("YES\n");
            return 0;
        }
        n /= 10;
    }

    printf("NO\n");
    return 0;
}
