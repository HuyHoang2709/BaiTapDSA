#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> b)
{
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x;
        map<int, int> m;
        while(n--)
        {
            cin >> x;
            m[x]++;
        }

        vector<pair<int, int>> vt;
        for(auto it : m) vt.push_back(it);
        sort(vt.begin(), vt.end(), cmp);

        for(auto it : vt)
        {
            for(int i = 1; i <= it.second; ++i) cout << it.first << ' ';
        }
        cout << '\n';
    }
    return 0;
}