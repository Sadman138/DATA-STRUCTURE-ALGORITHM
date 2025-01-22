#include <iostream>
using namespace std;
int main()
{
    int i, n, pos;
    cout << "Enter the terms n";
    cin >> n;
    int a[n + 1];
    cout << "Enter the elements of array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the inserted value position";
    cin >> pos;
    cout << "Enter the element to be inserted";
    int element;
    cin >> element;

    for (i = n; i > pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = element;
    cout << "After inserting the element";
    for (i = 0; i < n + 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
