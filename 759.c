#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, nums[10005], t;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &t);

    int left = 0, right = n - 1, ans = n;
    while(left <= right) {
        int mid = ((right - left) >> 1) + left;
        if(t <= nums[mid]) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
	printf("%d",ans);
    return 0;
}
