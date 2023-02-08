#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        int a[m], b[n];
        map<int, int> dem;

        for(int i = 0; i < m; ++i) 
        {
            cin >> a[i];
            dem[a[i]]++;
        }
        for(int i = 0; i < n; ++i) 
        {
            cin >> b[i];
            dem[b[i]]++;
        }

        for(auto i : dem)
        {
            cout << i.first << ' ';
        }
        cout << '\n';
        for(auto i : dem)
        {
            if(i.second > 1) cout << i.first << ' ';
        }
        cout << '\n';
    }
    return 0;
}