#include <bits/stdc++.h>

using namespace std;

int n;
struct student {
    int score;
    char name;
    char level[100];
} stu[1005];

int main()
{
    cin >> n;
    int s = 0, l = 0;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name;
        if (stu[i].name == 'C') {
            cin >>(stu[i].level);
            s++;
        } else {
            cin >> stu[i].score;
            l += stu[i].score;
        }
    }
    int x;
    x = l / (n - s);
    cout << s << " " << x << endl;
    return 0;
}
