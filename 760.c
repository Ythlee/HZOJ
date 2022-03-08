#include <stdio.h>
#include <stdlib.h>

int binarySearch(int* nums, int numsSize, int target, int lower)
{
    int left = 0, right = numsSize - 1, ans = numsSize;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] > target || (lower && nums[mid] >= target)) {
            right = mid - 1;
            ans = mid;
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int* searchRange(int* nums, int numsSize, int target)
{
    int leftIdx = binarySearch(nums, numsSize, target, 1);
    int rightIdx = binarySearch(nums, numsSize, target, 0) - 1;
    int* ret = malloc(sizeof(int) * 2);
    if (leftIdx <= rightIdx && rightIdx < numsSize && nums[leftIdx] == target && nums[rightIdx] == target) {
        ret[0] = leftIdx, ret[1] = rightIdx;
        return ret;
    }
    ret[0] = -1, ret[1] = -1;
    return ret;
}

int main(int argc, char *argv[])
{
    int n, nums[10005], t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &t);
    int *ret = searchRange(nums, n, t);
    printf("%d %d\n",ret[0],ret[1]);
    return 0;
}
