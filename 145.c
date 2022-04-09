#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n;
    int len = 0, ind = 0;
    scanf("%d", &n);
    char name[n][105];
    for(int i = 0; i < n; i++) {
        scanf("%s", name[i]);
        if(len < strlen(name[i])) {
            len = strlen(name[i]);
            ind = i;
        }
    }

    printf("%s\n", name[ind]);
    return 0;
}
