#include <stdio.h>
#include <string.h>

char dec2hex(int x)
{
    if (x > 9) {
        return x - 10 + 'A';
    } else {
        return x + '0';
    }
}

int is_valid(char c)
{
    if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
        return 1;
    return 0;
}

int main()
{
    char s[1000000] = {0}, buf[2] = {0}, encode_s[3000000] = {0}, *p = encode_s;
    scanf("%[^\n]", s);
    for (int i = 0; i < strlen(s); ++i) {
        if (is_valid(s[i])) {
            *(p++) = s[i];
        } else {
            *(p++) = '%';
            *(p++) = dec2hex((short)s[i] / 16);
            *(p++) = dec2hex((short)s[i] % 16);
        }
    }
    printf("%s", encode_s);
    return 0;
}
