#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    vector<int> arr;
    cin >> n;
    for(int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int p = arr[n / 2], sum;
    for(int i = 0; i < n ; i++) sum += abs(arr[i] - p);
    cout << sum << endl;

    return 0;
}
