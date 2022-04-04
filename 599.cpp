#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n, t;
    int num[1000005];
    cin >> n >> t;
    for(int i = 0; i < n; i++)
        cin >> num[i];

    int l = 0, r = n - 1;
    while(l < r) {
        if(num[l] + num[r] == t) {
            cout << l << " " << r << endl;
            return 0;
        } else if(num[l] + num[r] < t) {
            l++;
        } else {
            r--;
        }
    }

    return 0;
}
