#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(const string &a, const string &b)
{
    return a < b;
}

int main(int argc, char *argv[])
{
    int n;
    string str[30];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }

    sort(str, str + n, cmp);

    for(int i = 0; i < n; i++) {
        if(i != 0) {
            cout << " ";
        }
        cout << str[i];
    }
    return 0;
}
