#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using PII = pair<int, int>;

class BigInt : public vector<int>
{
public:
    BigInt(int x);
    void operator*=(int x);
    //BigInt operator*(int x);
    void operator/=(int x);
    BigInt operator/(int x);
    bool operator<(const BigInt &) const;
private:
    void proc();
};

BigInt::BigInt(int x)
{
    push_back(x);
    proc();
}

void BigInt::proc()
{
    for (int i = 0; i < size(); ++i) {
        if (at(i) < 10) continue;
        if (i + 1 == size()) push_back(0);
        at(i + 1) += at(i) / 10;
        at(i) %= 10;
    }
    while (size() > 1 && at(size() - 1) == 0) pop_back();
}

void BigInt::operator*=(int x)
{
    for (int i = 0; i < size(); ++i) at(i) *= x;
    proc();
}

//BigInt BigInt::operator*(int x) {
//    BigInt ret(*this);
//    ret *= x;
//    return ret;
//}

BigInt BigInt::operator/(int x)
{
    BigInt ret(*this);
    ret /= x;
    return ret;
}

bool BigInt::operator<(const BigInt& x) const
{
    if (size() - x.size()) return size() < x.size();
    for (int i = size() - 1; i >= 0; --i) {
        if (at(i) - x[i]) return at(i) < x[i];
    }
    return false;
}

ostream& operator<<(ostream& os, const BigInt& x)
{
    for (int i = x.size() - 1; i >= 0; --i) {
        os << x[i];
    }
    return os;
}

void BigInt::operator/=(int x)
{
    int y = 0;
    for (int i = size() - 1; i >= 0; --i) {
        y = y * 10 + at(i);
        at(i) = y / x;
        y %= x;
    }
    proc();
}




int main()
{
    vector<PII> arr;
    int n;
    cin >> n;
    for (int i = 0, a, b; i < n + 1; ++i) {
        cin >> a >> b;
        arr.emplace_back(a, b);
    }
    sort(arr.begin() + 1, arr.end(), [](const PII & a, const PII & b) {
        return a.first * a.second < b.first * b.second;
    });
    BigInt p = arr[0].first, ans = 0;
    for (int i = 1; i < n + 1; ++i) {
        BigInt temp = p / arr[i].second;
        ans = max(ans, temp);
        p *= arr[i].first;
    }
    cout << ans << endl;

    return 0;
}
