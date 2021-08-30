#include <iostream>
using namespace std;
//from given n we have to form a ulta pyaramid
int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }

    return 0;
}