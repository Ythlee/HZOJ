
#include <stdio.h>

int n, num[100005];

int quick_sort(int *a, int l, int r)
{
    int i = l;
    int j = r;
    int x = a[l];
    while(i < j) {
        while(i < j && a[j] >= x)
            j--;
        if(i < j) {
            a[i++] = a[j];
        }
        while(i < j && a[i] <= x)
            i++;
        if(i < j)
            a[j--] = a[i];
    }
    a[i] = x;
    if(l < i - 1)
        quick_sort(a, l, i - 1);
    if(r > i + 1)
        quick_sort(a, i + 1, r);

    return 0;
}

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    quick_sort(num, 0, n - 1);

    for(int i = 0; i < n; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}
