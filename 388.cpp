#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n, m, numn[100005], numm[100005], flag;
long long ans;


int main(int argc, char *argv[])
{
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%d", &numn[i]);
    }
    for(int i = 0; i < m; i++) {
        scanf("%d", &numm[i]);
    }

    sort(numm, numm + m);

    for(int i = 0; i < n; i++) {
        int l = 0, r = m - 1, temp = 0;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(numn[i] == numm[mid]) {
                temp = numn[i];
                break;
            }
            if(numn[i] > numm[mid]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if(temp != 0) {
            if(flag != 0) printf(" ");
            flag = 1;
            printf("%d", temp);
            ans += temp;
        }
    }
    printf("\n%lld\n", ans);
    return 0;
}
