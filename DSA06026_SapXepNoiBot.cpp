#include <bits/stdc++.h>

using namespace std;

void print(int a[], int n)
{
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
}

void BubbleSort(int a[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        int OK = 1;
        for(int j = 0; j < n-i-1; ++j)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                OK = 0;
            }
        }
        if(OK) break;
        cout << "Buoc " << (i+1) << ": ";
        print(a, n);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    BubbleSort(a, n);
    return 0;
}