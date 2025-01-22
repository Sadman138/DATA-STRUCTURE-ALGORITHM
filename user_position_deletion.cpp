#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the terms n :";
    cin >> n;
    int a[n];
    cout << "Enter the element of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the delete  position :";
    int pos;
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
}
