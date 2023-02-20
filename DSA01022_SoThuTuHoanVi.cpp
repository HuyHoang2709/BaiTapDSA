#include <iostream>

using namespace std;

int n;
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
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        b[i] = i;
    }
}

void sinh()
{
    int i = n-1;
    while(b[i] > b[i+1]) --i;
    if(i == 0) OK = 1;
    else 
    {
        int j = n;
        while(b[i] > b[j]) --j;
        swap(b[i], b[j]);
        int l = i+1;
        int r = n;
        while(l < r)
        {
            swap(b[l], b[r]);
            ++l; --r;
        }
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