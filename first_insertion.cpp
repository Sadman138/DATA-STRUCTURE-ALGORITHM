#include <iostream>
using namespace std;
int main()
{
    int i, n, first_value;
    cout << "Enter the terms n";
    cin >> n;
    int a[n];
    cout << "Enter the elements of array";
    for (i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Before inserting the first element" << endl;
    for (i = 1; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter the element to be first  position inserted" << endl;
    cin >> first_value;
    a[0] = first_value;
    cout << "After inserting the first element" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}