#include <bits/stdc++.h>

using namespace std;

// Code nay su dung pivot la phan tu cuoi cua mang

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; ++j)
    {
        if (a[j] <= pivot)
        {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);
        QuickSort(a, low, p - 1);
        QuickSort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {5, 1, 3, 6, 2, 4, 9, 10, 0};
    QuickSort(a, 0, 8);
    for(int i = 0; i < 9; ++i) cout << a[i] << ' ';
    return 0;
}