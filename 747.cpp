#include <iostream>
#include <cstring>

using namespace std;

char s1[105], s2[105];
int n1[105], n2[105], ans[105];

int comp(char *s1, char *s2)
{
    n1[0] = strlen(s1);
    n2[0] = strlen(s2);
    if(n1[0] < n2[0])
        return 1;
    else if(n1[0] > n2[0])
        return 2;
    else {
        for(int i = 0; i < n1[0]; i++) {
            if(s1[i] - s2[i] < 0)
                return 1;
            else if(s1[i] - s2[i] > 0)
                return 2;
        }
    }
    return 0;
}
void bignum(char *ss1, char *ss2)
{
    n1[0] = strlen(ss1);
    n2[0] = strlen(ss2);
    for(int i = 0, j = n1[0]; i < n1[0]; i++, j--) {
        n1[j] = ss1[i] - '0';
    }
    for(int i = 0, j = n2[0]; i < n2[0]; i++, j--) {
        n2[j] = ss2[i] - '0';
    }
    for(int i = 1; i <= n1[0]; i++) {
        ans[i] += n1[i] - n2[i];
        if(ans[i] < 0) {
            ans[i] += 10;
            ans[i + 1] -= 1;
        }
    }
    ans[0] = n1[0];
    for(int i = n1[0]; i > 0 ; i--) {
        if(ans[i] == 0) {
            ans[0]--;
        } else
            break;
    }
}

int main(int argc, char *argv[])
{
	int m,n;
	scanf("%d%d",&m,&n);
    int a;
    int flag = 0;
    cin >> s1 >> s2;
    a = comp(s1, s2);
    if(a == 1) {
        bignum(s2, s1);
        cout << '-';
    } else if(a == 2) {
        bignum(s1, s2);
    }

    for(int i = ans[0]; i > 0; i--) {
        cout << ans[i];
    }

    cout << endl;
    return 0;
}
