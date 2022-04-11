#include <stdio.h>

int temp, sum[35];

int main(int argc, char *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0 ; j < m; j++) {
            scanf("%d", &temp);
            sum[i] += temp;
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%.6lf\n", (double)sum[i] / m);
    }


    return 0;
}
