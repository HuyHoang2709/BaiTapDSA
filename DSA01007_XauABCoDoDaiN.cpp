#include <iostream>

using namespace std;

int n;
int OK;
char c[30];

void init()
{
    OK = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i) c[i] = 'A';
}

void print()
{
    for(int i = 1; i <= n; ++i) cout << c[i];
    cout << ' ';
}

void sinh()
{
    int i = n;
    while(c[i] == 'B') 
    {
        c[i] = 'A';
        --i;
    }
    if(i == 0) OK = 1;
    else c[i] = 'B';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        while(!OK)
        {
            print();
            sinh();
        }
        cout << '\n';
    }
    return 0;
}