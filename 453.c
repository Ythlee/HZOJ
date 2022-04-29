#include <stdio.h>

int n, k;
int num[10005];
int count;

int main(int argc, char *argv[])
{
    int temp;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1 ; j++) {
            if(num[j] > num[j + 1]) {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }

    for(int i = 0; i < n - 1; i++) {
        if(num[i] != num[i + 1]) {
            count++;
            if(count == k) {
                printf("%d\n", num[i]);
                return 0;
            }
        }
    }
    printf("NO RESULT\n");
    return 0;
}
