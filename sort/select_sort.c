//选择排序
#include <stdio.h>

int numbers[10] = {32, 1, 25, 43, 67, 3434, 43, 12, 89, 11};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void select_sort(int arr[], int len)
{
    int i, j;
    for(i = 0; i < len - 1; i++) {
        int min = i;
        for(j = i + 1; j < len; j ++) {
            if(arr[j] < arr[min])
                min = j;
        }
        swap(&arr[min], &arr[i]);
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
    select_sort(numbers, 10);
    print_arr(numbers, 10);

    return 0;
}
