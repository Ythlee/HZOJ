#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    int i = 0;
    scanf("%d%d", &a, &b);
    int temp = 0;
    while(temp < b) {
        temp++;
        if(temp % 11 == 0) {
            if(i)
                printf(" ");
            i = 1;
            printf("%d", temp);
        }
    }

    return 0;
}
