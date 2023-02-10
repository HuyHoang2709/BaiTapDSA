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
        int x;
        set<int> s;
        for(int i = 0; i < n; ++i)
        {
            cin >> x;
            s.insert(x);
        }

        if(s.size() == 1) cout << -1;
        else
        {
            int dem = 1;
            for(int it : s)
            {
                if(dem <= 2) cout << it << ' ';
                ++dem;
            }
        }
        cout << '\n';
    }
    return 0;
}