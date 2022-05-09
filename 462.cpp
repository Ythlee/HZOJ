#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, w, n;
    m = 0;
    w = 0;
    n = 0;
    long long avg = 0, cnt = 0;
    cin >> n;
    char ch;
    long long temp = 0;
    string s;
    while(n--) {
        cin >> ch;
        if (ch == 'q') {
            temp++;
            cin >> cnt;
            avg += cnt;
        }  else if (ch == 'i') {
            cin >> s;
            long long l = s.size();
            //cout << l << endl;
            //cout << s[l - 2] << endl;
            int a = s[l - 2] - 48;
            //cout << a << endl;
            if (a % 2 == 1) m += 1;
            else w += 1;
        }
    }
    cout << m << " " << w << " " <<  (avg == 0 ? 0 : (avg / temp) ) << endl;
    return 0;
}
