#include <stdio.h>

int n,  sum, num[35];
double m;

int main(int argc, char *argv[])
{
    int temp;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    scanf("%lf", &m);
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(num[j] < num[j + 1]) {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }

        }
    }

    for(int i = 0; i < m; i++) {
        sum += num[i];
    }
    printf("%.2lf", (double)(sum / m));
    return 0;
}
