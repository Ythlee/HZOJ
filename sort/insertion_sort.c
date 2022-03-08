//插入排序
#include <stdio.h>

int numbers[10] = {32, 1, 25, 43, 67, 3434, 43, 12, 89, 11};

void insertion_sort(int arr[], int len)
{
    int i, j, key;
    for(i = 1; i < len; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
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
    print_arr(numbers, 10);
    insertion_sort(numbers, 10);
    print_arr(numbers, 10);
    return 0;
}
