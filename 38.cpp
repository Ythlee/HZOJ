/*************************************************************************
	> File Name: 38.cpp
	> Author: Ythlee
	> Mail: yc872027415@163.com
	> Created Time: 2022年05月15日 星期日 00时27分54秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;
#define MAX_N 100

int dp[MAX_N + 5][MAX_N + 5];
int len = 1;
void fun(int k)
{
    for(int i = 1; i <= len; i++)
        dp[k][i] = dp[k - 1][i] + dp[k - 2][i];
    for(int i = 1; i <= len; i++) {
        dp[k][i + 1] += dp[k][i] / 10;
        dp[k][i] = dp[k][i] % 10;
        if(dp[k][len + 1]) len++;
    }
}

int main()
{
    int n;
    cin >> n;
    dp[1][1] = 1;
    dp[2][1] = 2;
    dp[3][1] = 3;
    dp[4][1] = 5;
    for(int i = 5; i <= n; i++)
        fun(i);

    for(int i = len; i >= 1; i--)
        cout << dp[n][i];
    cout << endl;


    return 0;
}



