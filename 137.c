#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int m = 0;
    scanf("%d", &n);

    for(int i = n; i > 0; i--) {
        for(int j = i; j > 0; j--) {
            printf("%c", 'A' + m);
            m += 1;
        }
        printf("\n");
    }
    return 0;
}
