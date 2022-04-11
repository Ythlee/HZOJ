#include <stdio.h>

int cha_num, dig_num, sp_num, oth_num;
char ch;

int main(int argc, char *argv[])
{
    while(~scanf("%c", &ch)) {
        if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
            cha_num++;
        } else if(ch >= '0' && ch <= '9') {
            dig_num++;
        } else if(ch == ' ' ) {
            sp_num++;
        } else {
            oth_num++;
        }
    }
    printf("%d %d %d %d", cha_num, dig_num, sp_num, oth_num-1);
    return 0;
}
