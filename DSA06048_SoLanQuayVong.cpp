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
        int idx = 0;
        int max = 0;
        for(int i = 0; i < n; ++i)
        {
            cin >> x;
            if(x > max)
            {
                max = x;
                idx = i;
            }
        }

        if(idx == n-1) cout << "0\n";
        else cout << idx + 1 << '\n';
    }
    return 0;
}