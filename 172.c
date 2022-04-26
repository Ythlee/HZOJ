#include <stdio.h>
#include <string.h>

char name[10][21];

int main(int argc, char *argv[])
{
    char temp[21];

    for(int i = 0; i < 10; i++) {
        scanf("%s", name[i]);
    }

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(strcmp(name[j], name[j + 1]) > 0) {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("%s\n", name[i]);
    }
    return 0;
}
