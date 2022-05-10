#include <iostream>
using namespace std;

int main()
{
    int num[1005] = { 0 };
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        num[t]++;
    }
    for (int i = 1; i <= 1000; i++) {
        if (num[i] % 2) {
            cout << i;
            break;
        }
    }
    return 0;
}
