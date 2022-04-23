#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

typedef struct node {
    int ind;
    string num;
} node;

int n;
node b[105];


bool cmp(const node &a, const node &b)
{
    if(a.num.size() == b.num.size())
        return a.num > b.num;
    return a.num.size()  > b.num.size();
}

int main(int argc, char *argv[])
{
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> b[i].num;
        b[i].ind = i;
    }
    sort(b + 1, b + n + 1, cmp);

    cout << b[1].ind << endl << b[1].num << endl;
    return 0;
}
