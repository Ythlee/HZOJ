#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string num[100005];
int n;

bool cmp(const string &a, const string &b)
{
    return a + b > b + a;
}


int main(int argc, char *argv[])
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n, cmp);


    for(int i = 0; i < n; i++) {
        cout << num[i];
    }
    cout << endl;
    return 0;
}
