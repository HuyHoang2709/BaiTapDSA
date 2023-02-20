#include <iostream>

using namespace std;

string b;
int bLength;

void init()
{
    cin >> b;
    bLength = b.length();
}

void sinh()
{
    int i = bLength - 1;
    while(b[i] == '0') 
    {
        b[i] = '1';
        --i;
    }
    if(i != -1) b[i] = '0';
}

void in()
{
    cout << b << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        init();
        sinh();
        in();
    }
}