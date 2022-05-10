#include<bits/stdc++.h>

using namespace std;

bool run(int n)
{
    if(n % 400 == 0 || n % 4 == 0 && n % 100 != 0)
        return true;
    else
        return false;
}


int main()
{
    int x, y, sum = 0;
    cin >> x >> y;
    for(int i = x; i <= y; i++) {
        if(run(i))
            sum++;
    }
    cout << sum;
    return 0;
}
