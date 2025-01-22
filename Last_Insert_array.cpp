#include <iostream>
using namespace std;
int main()
{
    int i, n, last_value;
    cout << "Enter The Terms N";
    cin >> n;
    int a[n + 1];
    cout << "Enter The Elements Of Array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The Last Inserted Array Is";

    cout << "Enter The Last Element";
    cin >> last_value;
    a[n] = last_value;
    cout << "After Inserting The Last Element";
    for (i = 0; i < n + 1; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}