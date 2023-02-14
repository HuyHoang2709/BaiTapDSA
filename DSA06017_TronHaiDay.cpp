#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        vector<long long> vt;
        long long x;
        for(int i = 1; i <= a + b; ++i)
        {
            cin >> x;
            vt.push_back(x);
        }
        sort(vt.begin(), vt.end());
        for(auto i : vt) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}