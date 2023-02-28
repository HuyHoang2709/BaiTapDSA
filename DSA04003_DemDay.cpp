// Ý tưởng: số dãy số có tổng bằng n là 2^(n-1)
#include <bits/stdc++.h>

using namespace std;

long long mod = 123456789;

long long powMod(long long n, long long k)
{
    if(k == 0) return 1;
    long long x = powMod(n, k / 2) % mod;
    x = (x % mod) * (x % mod);
    if(k % 2 == 0) return x % mod;
    return (x * n) % mod;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << powMod(2, n-1) << '\n';
    }
    return 0;
}