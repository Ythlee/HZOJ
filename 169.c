#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v, cnt = 0, ans = 0, kv[26] = {0};
    char ch, pwd[31] = {0}, *p = pwd;
    int cur_val = 0;
    char cur_ch;
    scanf("%d", &n);
    getchar();
    while (cnt < n) {
        scanf("%c", &ch);
        if (ch == '\n' && cur_val == 0) continue;
        if (ch > 64 && ch < 91) {
            cur_ch = ch;
            scanf("%d", &cur_val);
            kv[cur_ch - 'A'] = cur_val;
            cnt++;
        }
    }
    getchar();
    scanf("%s", pwd);
    while (*p != '\0') {
        if (*p > 64 && *p < 91) {
            ans += kv[*p - 'A'];
        }
        p++;
    }
    printf("%d", ans);
    return 0;
}
