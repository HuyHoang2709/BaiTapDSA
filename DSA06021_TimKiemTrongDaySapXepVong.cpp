#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int idx = 0;
        int max = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (max < a[i])
            {
                max = a[i];
                idx = i;
            }
        }

        int res;
        if (idx == n - 1) res = lower_bound(a, a + n, x) - a + 1;
        else
        {
            if (x <= a[n - 1]) res = lower_bound(a + idx + 1, a + n, x) - a + 1;
            else res = lower_bound(a, a + idx, x) - a + 1;
        }
        cout << res << '\n';
    }
    return 0;
}