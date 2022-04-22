#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct game {
    int t;
    int v;
};

int mark[10000] = {1};

int main()
{
    int m, n, tmp;
    vector<game> games ;
    cin >> m >> n;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        games.emplace_back(game{tmp, 0});
    }
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        games[i].v = tmp;
    }
    sort(begin(games), end(games), [](const game & a, const game & b) {
        if (a.v == b.v) return a.t < b.t;
        return a.v > b.v;
    });
    for (int i = 0; i < n; ++i) {
        for (int j = games[i].t; j >= 0; --j) {
            if (mark[j] == 0) {
                //cout << "mark[" << j << "]= " << mark[j] << endl;
                mark[j] = 1;
                break;
            }
            if (j == 0) {
                // cout << "m -= games[" << i << "].v"
                //      << " = " << games[i].v << endl;
                m -= games[i].v;
            }
        }
    }
    cout << m << endl;
    return 0;
}
