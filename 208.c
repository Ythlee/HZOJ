#include <stdio.h>

int n, k, num[105];
int flag[105];

int sort(int *a)
{
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(num[j] < num[j + 1]) {
                temp = num[j + 1];
                num[j + 1 ] = num[j];
                num[j] = temp;
            }
        }
    }
    return 0;
}

int search(int *a)
{
    int t = 1, sum = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] == sum) {
            t++;
            if(t >= k && a[i + 1] != a[i]) {
                return t;
            }
        } else {
            t = 1, sum = a[i];
        }
    }
    return t;
}

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &k);

    sort(num);
    int ret = search(num);
    printf("%d\n", ret);

    return 0;
}
