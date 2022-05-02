#include <stdio.h>
#include <string.h>

char name[105][55];
int n;

void change(char *na)
{
    for(int i = 3; i < strlen(na); i++) {
        na[i - 3] = na[i];
    }
    na[strlen(na) - 3] = '\0';
}
void cmp(char name[][55])
{
    char temp[55];
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(strcmp(name[j], name[j + 1]) > 0) {
                strcpy(temp, name[j + 1]);
                strcpy(name[j + 1], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%s", name[i]);
    }
    for(int i = 0; i < n; i++) {
        change(name[i]);
    }

    cmp(name);

    for(int i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}
