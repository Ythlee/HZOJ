#include <iostream>
#include <algorithm>

using namespace std;

typedef struct node {
    int che, math, eng, ind, sum;
} node;

int n;
node stu[305];


bool cmp(const node &a, const node &b)
{
    if(a.sum == b.sum) {
        if(a.che == b.che) {
            return a.ind < b.ind;
        }
        return a.che > b.che;
    }
    return a.sum > b.sum;
}

int main(int argc, char *argv[])
{
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> stu[i].che >> stu[i].math >> stu[i].eng;
        stu[i].ind = i + 1;
        stu[i].sum = stu[i].che + stu[i].math + stu[i].eng;
    }

    sort(stu, stu + n, cmp);

    for(int i = 0; i < 5; i++) {
        cout << stu[i].ind << " " << stu[i].sum << endl;
    }

    return 0;
}
