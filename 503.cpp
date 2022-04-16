#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int nums[30005];
    int w, n;
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);
    int res = 0;
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int sum = nums[l] + nums[r];
        if (sum <= w) {
            res++;
            r--;
            l++;
        } else if (sum > w) {
            res++;
            r--;
        }

    }
    cout << res << endl;
}
