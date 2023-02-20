#include <iostream>

using namespace std;

int n, k;
int a[15];
int b[15];
int OK;
int kt;
int dem;

void init()
{
    kt = 0;
    OK = 0;
    dem = 1;
    cin >> n >> k;
    for(int i = 1; i <= k; ++i)
    {
        cin >> a[i];
        b[i] = i;
    }
}

void sinh()
{
    int i = k;
    while(b[i] == n - k + i) --i;
    if(i == 0) OK = 1;
    else
    {
        ++b[i];
        for(int j = i+1; j <= k; ++j) b[j] = b[j-1] + 1;
    }
}

int check()
{
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] != b[i])
        {
            ++dem;
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        while(!kt)
        {
            kt = check();
            if(!kt) sinh();
        }
        cout << dem << '\n';
    }
    return 0;
}