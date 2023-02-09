#include <bits/stdc++.h>

using namespace std;

void print(int a[], int n)
{
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
}

void InterchangeSort(int a[], int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            if(a[i] > a[j]) 
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
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
    InterchangeSort(a, n);
    return 0;
}