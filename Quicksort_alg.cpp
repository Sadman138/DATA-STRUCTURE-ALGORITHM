#include <iostream>
using namespace std;
int partition(int a[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (a[i] <= a[end])
        {
            swap(a[i], a[pos]);
            pos++;
        }
    }
    return pos - 1;
}
void quicksort(int a[], int start, int end)
{
    if (start >= end)
        return;
    int pivot = partition(a, start, end);
    // Left side
    quicksort(a, start, pivot - 1);
    // right side
    quicksort(a, pivot + 1, end);
}
int main()
{
    int i, n;
    cout << "Enter the terms n";
    cin >> n;
    int a[n];
    cout << "Enter all elements of array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quicksort(a, 0, n - 1);
    cout << "Sorted array";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}