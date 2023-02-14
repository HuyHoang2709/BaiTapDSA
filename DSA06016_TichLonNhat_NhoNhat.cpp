#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        long long x;
        long long max = 0;
        long long min = 100000000;
        while(a--)
        {
            cin >> x;
            if(max < x) max = x;
        }
        while(b--)
        {
            cin >> x;
            if(min > x) min = x;
        }
        cout << max * min << '\n';
    }
    return 0;
}