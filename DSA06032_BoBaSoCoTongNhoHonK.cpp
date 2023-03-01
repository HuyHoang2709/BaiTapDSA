#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        long long k;
        cin >> n >> k;
        long long a[n];
        for (long long i = 0; i < n; ++i) cin >> a[i];

        sort(a, a + n);
        long long dem = 0;
        for (long long i = 0; i < n - 2; ++i)
        {
            long long l = i + 1;
            long long r = n - 1;
            while (l < r)
            {
                if (a[i] + a[l] + a[r] >= k) --r;
                else
                {
                    dem += (r - l);
                    ++l;
                }
            }
        }
        cout << dem << '\n';
    }
    return 0;
}