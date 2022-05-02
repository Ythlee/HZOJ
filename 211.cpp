#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main()
{
    int n;
    cin >> n;
    string str[35];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        reverse(str[i]. begin(), str[i].end());
    }
    sort(str, str + n);
    for (int i = 0; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}
