#include <stdio.h>

int n, source;

int y, l, z, c;

int main(int argc, char *argv[])
{
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &source);
        if(source >= 90 && source <= 100)y++;
        else if(source >= 80 && source <= 89) l++;
        else if(source >= 60 && source <= 79) z++;
        else c++;
    }
    printf("You %d\n", y);
    printf("Liang %d\n", l);
    printf("Zhong %d\n", z);
    printf("Cha %d\n", c);
    return 0;
}
