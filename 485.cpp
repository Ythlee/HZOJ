#include <iostream>
using namespace std;

int ans, n, avg, deck[105];
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> deck[i];
        avg += deck[i];
    }
    avg = avg / n;
    for (int i = 0; i < n - 1; ++i) {
        if (deck[i] != avg) {
            ans++;
            deck[i + 1] += deck[i] - avg;
        }
    }
    cout << ans << endl;
    return 0;
}
