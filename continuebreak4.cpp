#include <iostream>
using namespace std;
//WAP to print all odd numbers till n
int main()
{
    int n;
    cout << "Enter the number N: ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}