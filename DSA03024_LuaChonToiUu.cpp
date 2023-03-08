#include <bits/stdc++.h>

using namespace std;

struct LuaChon
{
    int s, f;
};

bool cmp(LuaChon a, LuaChon b)
{
    return a.f < b.f;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        LuaChon a[n];
        for (int i = 0; i < n; ++i) cin >> a[i].s >> a[i].f;

        sort(a, a + n, cmp);

        int dem = 1;
        int i = 0;
        for (int j = 1; j < n; ++j)
        {
            if (a[i].f <= a[j].s)
            {
                i = j;
                ++dem;
            }
        }
        cout << dem << '\n';
    }
    return 0;
}