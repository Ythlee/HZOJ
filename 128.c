#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int arr[10000];
    double s;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    s = (double)sum / n;
    printf("%.2lf\n", s);

    return 0;
}
