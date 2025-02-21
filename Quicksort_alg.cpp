//By First Elements Pivot

#include <iostream>
using namespace std;

int partition(int a[], int start, int end)
{
    int pivot = a[start]; // প্রথম এলিমেন্টকে পিভট ধরা হলো
    int pos = start; 

    for (int i = start + 1; i <= end; i++) 
    {
        if (a[i] < pivot) 
        {
            pos++;
            swap(a[i], a[pos]);
        }
    }
    swap(a[start], a[pos]); // পিভটকে সঠিক স্থানে বসানো হলো
    return pos; // নতুন পিভট ইনডেক্স রিটার্ন
}

void quicksort(int a[], int start, int end)
{
    if (start >= end)
        return;
    int pivot = partition(a, start, end);
    quicksort(a, start, pivot - 1); // Left part
    quicksort(a, pivot + 1, end); // Right part
}

int main()
{
    int i, n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter all elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quicksort(a, 0, n - 1);
    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}








//By Last Elements Pivot
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
