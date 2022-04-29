#include <stdio.h>
#include <math.h>

int n;
int source[35] = {0};
int num[15] = {0};


int main(int argc, char *argv[])
{
    int temp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &source[i]);
        num[source[i] / 10]++;
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(source[j] < source[j + 1]) {
                temp = source[j + 1];
                source[j + 1] = source[j];
                source[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n", source[i]);
    }
    for(int i = 10; i >= 5 ; i--) {
        (i != 10) && printf(" ");
        if(i != 5)
            printf("%d", num[i]);
        if(i == 5) {
            printf("%d\n", num[0] + num[1] + num[2] + num[3] + num[4] + num[5]);
            return 0;
        }
    }
    return 0;
}
