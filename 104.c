#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    scanf("%d", &a);
    for(int i = 0; i < 3; i++) {
        if(a % 10 == 9) {
            printf("YES");
            return 0;
        }
        a /= 10;
    }

    printf("NO");
    return 0;
}
