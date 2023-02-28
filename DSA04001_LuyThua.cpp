#include <iostream>

using namespace std;

int m = 1e9 + 7;

long long powMod(int n, int k)
{
    if(k == 0) return 1;
    long long x = powMod(n, k / 2);
    if(k % 2 == 0) return x * x % m;
    else return n * (x * x % m) % m;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << powMod(n, k) << '\n';
    }
    return 0;
}