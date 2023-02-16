#include <bits/stdc++.h>

using namespace std;

long long dem;
long long arr[100005];

void khoiTao()
{
    dem = 0;
    for(long long i = 0; i < 100005; ++i) arr[i] = 0;
}

void demCap(long long n, long long k)
{
    sort(arr, arr + n);
    for(long long i = 0; i < n-1; ++i)
    {
        long long x = k - arr[i];
        long long lower = lower_bound(arr + i + 1, arr + n, x) - arr;
        long long upper = upper_bound(arr + i + 1, arr + n, x) - arr;
        dem += upper - lower;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        khoiTao();
        
        long long n, k;
        cin >> n >> k;
        for(long long i = 0; i < n; ++i) cin >> arr[i];

        demCap(n, k);
        cout << dem << '\n';
    }
    return 0;
}