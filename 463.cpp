#include <iostream>

using namespace std;

struct WD {
    int l;
    int r;
    int t;
    int b;
};

WD a, b, t;

int main()
{

    cin >> a.l >> a.r >> a.t >> a.b;
    cin >> b.l >> b.r >> b.t >> b.b;

    t.l = max(a.l, b.l);
    t.r = min(a.r, b.r);
    t.t = max(a.t, b.t);
    t.b = min(a.b, b.b);

    int s = 0;

    if(t.l >= t.r || t.t >= t.b) {
        s = 0;
    }

    else {
        s = ((t.r - t.l) * (t.b - t.t));
    }

    cout << s;
    return 0;
}
