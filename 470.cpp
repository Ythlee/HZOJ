#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

#define MAX_N 500000

int n, num[MAX_N + 5];

int main()
{
    char str[10];
    while (cin >> str) {
        for (int i = 4, j = 1; i >= 0; i--, j *= 36) {
            int temp;
            if (str[i] <= '9') temp = str[i] - '0';
            else temp = str[i] - 'A' + 10;
            num[n] += temp * j;
        }
        n++;
    }
    sort(num, num + n);
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        int temp = num[i + 1] - num[i];
        if (temp < ans) ans = temp;
    }
    cout << ans << endl;
    return 0;
}
