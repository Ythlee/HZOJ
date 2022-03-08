#include <iostream>
#include <algorithm>

using namespace std;

int nums[10005];

int main(int argc, char *argv[])
{
    int n;
    cin >> n;

    for(int i  = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, n + nums);

    cout << nums[n - 1] - nums[0] << endl;

    return 0;
}
