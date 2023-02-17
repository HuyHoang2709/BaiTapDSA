#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long x;
        long long a[n];
        for(int i = 0; i < n; ++i)
        {
            cin >> x;
            a[i] = x * x;
        }

        sort(a, a + n);
        int check = 0;
        for(int i = n-1; i > 1; --i)
        {
            int l = 0;
            int r = i-1;
            while(l < r && a[l] + a[r] != a[i])
            {
                if(a[l] + a[r] < a[i]) ++l;
                else --r;
            }
            if(a[l] + a[r] == a[i])
            {
                check = 1;
                break;
            }
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}