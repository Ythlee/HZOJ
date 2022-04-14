#include <stdio.h>
#include <string.h>

void mypow(int n)
{
    char s[64] = {0};
    s[0] = '1';
    while (n-- > 0) {
        int inc = 0;
        for (int i = 0; i < strlen(s); ++i) {
            int temp = 2 * (s[i] - '0') + inc;
            s[i] = temp % 10 + '0';
            if(temp > 9) inc = 1;
            else inc = 0;
        }
        if (inc) s[strlen(s)] = '1';
    }
    char rs[64] = {0};
    size_t s_len = strlen(s);
    for (int i = 0; i < s_len; ++i) {
        rs[i] = s[s_len - 1 - i];
    }
    printf("%s", rs);
}

int main()
{
    int n;
    scanf("%d", &n);
    mypow(n);
    return 0;
}
