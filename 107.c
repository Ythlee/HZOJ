#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    if(n % 7 == 0 && n % 2 != 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
