#include <iostream>

using namespace std;

long long m = 1e9 + 7;

long long powMod(long long n, long long k)
{
    if(k == 0) return 1;
    long long x = powMod(n, k / 2);
    x = (x * x) % m;
    if(k % 2 == 0) return x;
    return (x * n) % m;
}

int main()
{
    long long n, k;
    while(true)
    {
        cin >> n >> k;
        if(n == 0 && k == 0) return 0; 
        cout << powMod(n, k) << '\n';
    }
    return 0;
}