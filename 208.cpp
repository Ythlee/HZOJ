#include <iostream>
#include <algorithm>
using namespace std;

bool cmp (int a, int b)
{
    return a > b;
}

int main()
{
    int n, a[105], w;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &w);
    sort(a, a + n, cmp);

    int t = 1, sum = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] == sum) {
            t++;
            if(t >= w && a[i + 1] != a[i]) {
                break;
            }
        } else {
            t = 1, sum = a[i];
        }
    }

    printf("%d\n", t);
    return 0;
}
