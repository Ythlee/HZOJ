#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
int gcd(int a, int b);

int main()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int x = a[0], y = a[2], p;
    p = gcd(x, y);
    cout << a[0] / p << "/" << a[2] / p; //约分
    return 0;
}

int gcd(int a, int b)       //最大公约数 递归
{
    if(b == 0)	return a;
    else return gcd(b, a % b);
}
