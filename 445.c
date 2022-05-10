#include <stdio.h>

int arr[1000] = {0};

int get_tal(int *arr, int n)
{
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    int t1, t2;
    int cunt = 0;
    for (int j = 1; j <= n; j++) {
        t1 = 0, t2 = 0;
        for(int m = 1; m <= j; m++) {
            if (arr[m] > arr[j]) t1++;
        }
        for(int k = j + 1; k <= n; k++) {
            if (arr[k] > arr[j]) t2++;
        }
        if (t1 == t2) cunt++;
    }
    return cunt;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", get_tal(arr, n));
    return 0;
}


