#include <iostream>
#include <string>
using namespace std;

string str;
int s;
int main()
{
    cin >> str >> s;
    //遍历字符串，按规则删除数字
    for (int i = 0; i < s; ++i) {
        //默认最后的数字最大，需要删除
        int ind = str.size() - 1;
        for (int j = 0; j < str.size() - 1; ++j) {
            //如果当前数字比后面一位的数字大，则标记当前位置
            if (str[j] > str[j + 1]) {
                ind = j;
                break;
            }
        }
        //删除ind位置的字符
        //replace方法在ind位置开始，长度为1的空间内，用“”空字符替换内容
        str.replace(ind, 1, "");
    }
    int f = 0;
    //处理前导0
    for (int i = 0; i < str.size(); ++i) {
        //遇到第一个非0字符时，f标记为1，表示前导0已经略过
        if (str[i] != '0') {
            f = 1;
        }
        if (f == 1) {
            cout << str[i];
        }
    }
    cout << endl;
    return 0;
}
