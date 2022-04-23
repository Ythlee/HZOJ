#include <iostream>
#include <algorithm>
using namespace std;

struct node {
    int id, num;
};

int n, m;
node wm[100005];

bool cmp(const node &a, const node &b)
{
    return a.num < b.num;
}

int main()
{
    scanf("%d%d", &n, &m);
    //cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &wm[i].num);
        //cin >> wm[i].num;
        wm[i].id = i + 1;
    }
    sort(wm, wm + n, cmp);
    for (int i = 0; i < m; ++i) {
        int t, f = 0, l = 0, r = n - 1;
        scanf("%d", &t);
        //cin >> t;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (t == wm[mid].num) {
                f = wm[mid].id;
                break;
            }
            if (t < wm[mid].num) {
                r = mid - 1;
            }
            if (t > wm[mid].num) {
                l = mid + 1;
            }
        }
		printf("%d\n",f);
        //cout << f << endl;
    }
    return 0;
}
