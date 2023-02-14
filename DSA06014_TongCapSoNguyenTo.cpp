#include <bits/stdc++.h>

using namespace std;

int notPrime[1000005] = {};
void sang()
{
    notPrime[0] = notPrime[1] = 1;
    for(int i = 2; i <= 1000; ++i)
    {
        if(notPrime[i] == 0) 
        {
            for(int j = i * i; j <= 1000000; j += i) notPrime[j] = 1;
        }
    }
}

int main()
{
    sang();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(notPrime[n-2] == 0) cout << "2 " << n - 2 << '\n';
        else
        {
            int ok = 0;
            for(int i = 3; i <= n/2; i += 2)
            {
                if(notPrime[i] == 0 && notPrime[n-i] == 0) 
                {
                    cout << i << ' ' << n-i << '\n';
                    ok = 1;
                    break;
                }
            }
            if(!ok) cout << -1 << '\n';
        }
    }
    return 0;
}