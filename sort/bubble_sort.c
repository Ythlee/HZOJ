//冒泡排序
#include <stdio.h>

int numbers[10] = {32, 1, 25, 43, 67, 3434, 43, 12, 89, 11};

void bubble_sort(int arr[], int len)
{
    int temp;
    for(int i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    bubble_sort(numbers, 10);
    print_arr(numbers, 10);
    return 0;
}
