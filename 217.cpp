#include <iostream>
#include <algorithm>

using namespace std;

int sum[100005];
int main(int argc, char *argv[])
{
    int n;
    int source, m;
    int arage;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> sum[i];
    }
    sort(sum, sum + n);
    m = (n+1) / 2;
    arage = sum[n / 2];
    for(int i = n / 2; sum[i] == sum[i - 1]; i--) {
        m++;
    }
    cout << sum[n / 2] << " " << m;
    return 0;
}
