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
        int a[n];
        map<int, int> mp;
        for(int i = 0; i < n; ++i) 
        {
            cin >> a[i];
            ++mp[a[i]];
        }

        int OK = 0;
        for(int i = 0; i < n; ++i)
        {
            if(mp[a[i]] > 1) 
            {
                cout << a[i] << '\n';
                OK = 1;
                break;
            }
        }
        if(!OK) cout << "NO\n";
    }
    return 0;
}