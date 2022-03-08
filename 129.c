#include <stdio.h>

int nums[10005];
int main(int argc, char *argv[])
{
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for(int i = 0; i < n - 1; i++) {
        if(nums[i] < nums[i + 1])
            nums[i + 1] = nums[i];
    }
    printf("%d\n", nums[n - 1]);
    return 0;
}
