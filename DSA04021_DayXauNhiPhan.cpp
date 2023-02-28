#include <iostream>

using namespace std;

long long F[100] = {};

void sinh()
{
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; ++i) F[i] = F[i-1] + F[i-2];
}

int fiboWord(int n, long long i)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(i <= F[n-2]) return fiboWord(n-2, i);
    return fiboWord(n-1, i - F[n-2]);
}

int main()
{
    sinh();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long i;
        cin >> n >> i;
        cout << fiboWord(n, i) << '\n';
    }
    return 0;
}