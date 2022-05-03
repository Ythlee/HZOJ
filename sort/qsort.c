#include <stdio.h>

//快速排序
int numbers[10] = {32, 1, 25, 43, 67, 3434, 43, 12, 89, 11};

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


void print_arr(int arr[], int len)
{
    for(int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}




int main(int argc, char *argv[])
{
    quick_sort(numbers, 0, 9);
    print_arr(numbers, 10);

    return 0;
}
