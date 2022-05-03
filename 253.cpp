#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Cow {
    int l, h;
    bool operator<(const Cow& b) const
    {
        return h > b.h;
    }
};

struct Liq {
    int s, n;
};

int main()
{
    int c, l, ans = 0;
    cin >> c >> l;
    vector<Cow> cows(c);
    vector<Liq> liqs(l);
    for (int i = 0; i < c; ++i) {
        cin >> cows[i].l >> cows[i].h;
    }
    for (int i = 0; i < l; ++i) {
        cin >> liqs[i].s >> liqs[i].n;
    }
    sort(begin(cows), end(cows), [](const Cow & a, const Cow & b) {
        return a.l < b.l;
    });
    sort(begin(liqs), end(liqs), [](const Liq & a, const Liq & b) {
        return a.s < b.s;
    });
    priority_queue<Cow> q;
    for (int i = 0, j = 0; i < l; ++i) {
        while (j < c) {
            if(cows[j].l > liqs[i].s) break;
            q.push(cows[j++]);
        }
        while (!q.empty() && liqs[i].n) {
            Cow tmp = q.top();
            if (tmp.h < liqs[i].s) q.pop();
            else if (tmp.l <= liqs[i].s) {
                liqs[i].n -= 1;
                ans += 1;
                q.pop();
            }
        }
    }
    cout << ans << endl;
    return 0;
}
