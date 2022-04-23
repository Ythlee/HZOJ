/*************************************************************************
	> File Name: oj-387_eat_melon_v2.cpp
	> Author: Wang Bo
	> Mail: 1276106221@qq.com
	> Created Time: 2020年11月01日 星期日 15时42分41秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int id, num;
};

bool cmp(const node &a, const node &b)
{
    return a.num < b.num;
}

int m, n;
node wm[100005];

int main()
{
    scanf("%d%d", &m, &n);
    //cin >> m >> n;
    for (int i = 0; i < m; ++i) {

        scanf("%d", &wm[i].num);
        //cin >> wm[i].num;
        wm[i].id = i + 1;
    }
    wm[m].id = 0;
    wm[m].num = 2100000000;
    sort(wm, wm + m + 1, cmp);
    for (int i = 0; i < n; ++i) {
        int t, l = 0, r = m;
        scanf("%d", &t);
        //cin >> t;
        while (l != r) {
            int mid = (l + r) / 2;
            if (wm[mid].num >= t) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        printf("%d\n", wm[l].id);
        //cout << wm[l].id << endl;
    }
    return 0;
}
