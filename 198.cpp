#include <iostream>

unsigned long Fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    long long const M = 1000000007;
    long long fn_2 = 0, fn_1 = 1, fn;
    while (n-- > 1) {
        fn = (fn_1 + fn_2) % M;
        fn_2 = fn_1;
        fn_1 = fn;
    }
    return fn_1;
}

int main()
{
    long long n;
    while (std::cin >> n) {
        std::cout << Fibonacci(n) << "\n";
    }
    return 0;
}
