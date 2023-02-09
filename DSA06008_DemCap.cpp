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

        for(int i = 0; i < m; ++i) cin >> a[i];
        for(int i = 0; i < n; ++i) cin >> b[i];

        int dem = 0;
        for(int i = 0; i < m; ++i)
        {
            if(a[i] > 0)
            {
                if(a[i] == 1) 
                {
                    for(int j = 0; j < n; ++j)
                        if(b[j] == 0) ++dem;
                }
                else
                {
                    for(int j = 0; j < n; ++j)
                    {
                        if(b[j] > 0) 
                        {
                            if(a[i] < b[j]) ++dem;
                            else if(b[j]*log(a[i]) > a[i]*log(b[j])) ++dem;
                        }
                    }
                }
            }
        }
        cout << dem << '\n';
    }
    return 0;
}