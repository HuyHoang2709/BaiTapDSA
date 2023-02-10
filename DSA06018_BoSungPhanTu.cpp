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
        int min = 1005;
        int max = 0;
        for(int i = 0; i < n; ++i) 
        {
            cin >> x;
            s.insert(x);
            if(max < x) max = x;
            if(min > x) min = x;
        }

        cout << (max - min + 1) - s.size() << '\n';
    }
    return 0;
}