#include <stdio.h>

int num[10];

int main(int argc, char *argv[])
{
    int n = 10, temp;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(num[j] < num[j + 1]) {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++) {
        i && printf(" ");
        printf("%d", num[i]);
    }
    return 0;
}
