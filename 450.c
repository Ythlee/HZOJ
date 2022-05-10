#include <stdio.h>

int n, num[105];

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0 ; j < n - i - 1; j++) {
            if(num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        i && printf(" ");
        printf("%d", num[i]);
    }

    return 0;
}
