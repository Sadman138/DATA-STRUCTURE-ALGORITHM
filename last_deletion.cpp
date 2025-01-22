#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the terms n";
    cin >> n;
    int a[n];
    cout << "Enter the elements of array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "After last deletion array";
    for (i = 0; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
}