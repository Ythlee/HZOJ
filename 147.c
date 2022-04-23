#include <stdio.h>
#include <string.h>

char num[10005];

int main(int argc, char *argv[])
{
    int a;
    scanf("%s", num);
    a = strlen(num) - 1;
    if(((num[a] - '0') & 1) == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
