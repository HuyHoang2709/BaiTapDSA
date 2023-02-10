#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];

        int low = lower_bound(a, a + n, x) - a;
        int high = upper_bound(a, a + n, x) - a;

        if(high - low > 0) cout << high - low;
        else cout << -1;
        cout << '\n';
    }
    return 0;
}