#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef struct node {
    int ind;
    int num;
} node;

int n, now, sum;
node stu[35];

bool cmp(const node &a, const node &b)
{
    return a.num < b.num;
}

int main(int argc, char *argv[])
{
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> stu[i].num;
        stu[i].ind = i;
    }

    sort(stu + 1, stu + n + 1, cmp);

    for(int i = 1; i <= n; i++) {
        if(i != 1) {
            cout << " ";
        }
        cout << stu[i].ind;
        sum += now;
        now += stu[i].num;
    }

    printf("\n%.2lf\n", (double)sum / n);
    return 0;
}
