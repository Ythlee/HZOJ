#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int tmp;
    float arr[101] = {0.0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for(int i; i < n; i++)
        printf("%g\n", arr[i]);

    return 0;
}
