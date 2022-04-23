#include <iostream>
#include <algorithm>

using namespace std;

typedef struct node {
    char name[25];
    char off, west;
    int avr, cla, paper, ind, sum;
} node;

int n, ans;
node stu[105];


bool cmp(const node &a, const node &b)
{
    if(a.sum == b.sum) {
        return a.ind < b.ind;
    }
    return a.sum > b.sum;
}

void func(int i)
{
    if(stu[i].avr > 80 && stu[i].paper >= 1) stu[i].sum += 8000;
    if(stu[i].avr > 85 && stu[i].cla > 80) stu[i].sum += 4000;
    if(stu[i].avr > 90) stu[i].sum += 2000;
    if(stu[i].avr > 85 && stu[i].west == 'Y') stu[i].sum += 1000;
    if(stu[i].cla > 80 && stu[i].off == 'Y') stu[i].sum += 850;
    ans += stu[i].sum;
}

int main(int argc, char *argv[])
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].avr >> stu[i].cla >> stu[i].off >> stu[i].west >> stu[i].paper;
        stu[i].ind = i;
        stu[i].sum = 0;
        func(i);
    }

    sort(stu, stu + n, cmp);

    cout << stu[0].name << endl << stu[0].sum << endl << ans << endl;

    return 0;
}
