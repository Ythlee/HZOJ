#include <iostream>
using namespace std;

struct round {
    char s[2];
    int a, b, flag;
};

round turn[15];
int ans;

int main()
{
    for (int i = 0; cin >> turn[i].s ; ++i) {
        //flag 0 全部清空
        if (turn[i].s[0] == '/') {
            turn[i].a = 10;
            turn[i].b = 10;
            turn[i].flag = 0;
            //flag 1 两次滚球清空
        } else if (turn[i].s[1] == '/') {
            turn[i].a = turn[i].s[0] - '0';
            turn[i].b = 10;
            turn[i].flag = 1;
            //flag 2 两次滚球未清空
        } else {
            turn[i].a = turn[i].s[0] - '0';
            turn[i].b = turn[i].s[1] - '0' + turn[i].a;
            turn[i].flag = 2;
        }
    }
    for (int i = 0; i < 10; ++i) {
        //首先加入本轮得分
        ans += turn[i].b;
        //如果该轮是两次清空
        if (turn[i].flag == 1) {
            //需要加入下一轮的第一球得分
            ans += turn[i + 1].a;
            //如果该轮是一次滚球全部清空
        } else if (turn[i].flag == 0) {
            //下轮也是一次滚球全部清空
            if (turn[i + 1].flag == 0) {
                //加入后面第二轮的第一球得分
                ans += 10 + turn[i + 2].a;
            } else {
                //否则加入后面一轮的第二球得分
                ans += turn[i + 1].b;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
