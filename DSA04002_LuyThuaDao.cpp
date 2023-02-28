#include <iostream>

using namespace std;

long long mod = 1e9 + 7;

long long powMod(long long n, long long k)
{
    if(k == 1) return n;
    long long x = powMod(n, k / 2) % mod;
    x = (x * x) % mod;
    if(k % 2 != 0) x = (x * n) % mod;
    return x % mod;
}

long long dao(long long n)
{
    long long res = 0;
    while(n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << powMod(n, dao(n)) << '\n';
    }
    return 0;
}