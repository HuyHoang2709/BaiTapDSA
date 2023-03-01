#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        int l = 0;
        int r = k - 1;
        vector<int> tmp;
        while (r < n)
        {
            int max = 0;
            for (int i = l; i <= r; ++i)
            {
                if (a[i] > max) max = a[i];
            }
            cout << max << ' ';
            ++l; ++r;
        }
        cout << '\n';
    }
    return 0;
}