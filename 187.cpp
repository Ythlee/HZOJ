#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

//常规大整数类只管+和*
class BigInt : public vector<int>
{
public:
    BigInt(int x = 0)
    {
        push_back(x);
        proc();
    }
    ~BigInt() = default;
    BigInt& operator*(int x)
    {
        *this *= x;
        return *this;
    }
    void operator*=(int x)
    {
        for (int i = 0; i < size(); ++i) {
            at(i) *= x;
        }
        proc();
    }
    BigInt& operator+(const BigInt& b)
    {
        *this += b;
        return *this;
    }
    void operator+=(const BigInt& b)
    {
        for (int i = 0; i < b.size(); ++i) {
            if (i == size()) push_back(b[i]);
            else at(i) += b[i];
        }
        proc();
    }
    void proc()
    {
        for (int i = 0; i < size(); ++i) {
            if (at(i) < 10) continue;

            if (i == size() - 1) {
                push_back(0);
            }
            at(i + 1) += at(i) / 10;
            at(i) %= 10;
        }
        while (size() > 1 && at(size() - 1) == 0) {
            pop_back();
        }
    }
};

ostream& operator<<(ostream& os, BigInt& b)
{
    for (int i = b.size() - 1; i >= 0; --i) {
        os << b[i];
    }
    return os;
}

class Solution
{
private:
    int n;
    BigInt cost;
    BigInt moves;
public:
    Solution()
        : cost(0), moves(0)
    {
        cin >> n;
        solve(n);
        cout << moves << " " << cost << endl;
    }
    //f和g都用了尾递归优化和记忆化，其实用循环递推更快
    //f求解次数，g求解消耗的体力
    //次数的通项公式f(x) = f(x - 1) * 2 + 1;
    //体力的通项公式g(x) = g(x - 1) * 2 + x;
    BigInt f(int n, BigInt x)
    {
        if (n == 1) {
            return x * 2 + 1;
        }
        return f(n - 1, x * 2 + 1);
    }
    BigInt g(int n, int x, BigInt y)
    {
        if (n == 1) {
            return y * 2 + x;
        }
        return g(n - 1, x + 1, y * 2 + x);
    }
    void solve(int n)
    {
        moves = f(n, 0);
        cost = g(n, 1, 0);
    }
};

int main(int argc, const char** argv)
{
    Solution s;
    return 0;
}
