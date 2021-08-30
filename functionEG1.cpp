//To find the power of a given number by using function.
#include <iostream>
using namespace std;

int pow(int num, int po)
{
    int ans;
    for (int i = 0; i < po; i++)
    {
        ans = ans * num;
    }
    return ans;
}

int main()
{
    int n, p, answer;
    cout << "Enter the number : " << endl;
    cin >> n;
    cout << "Enter power : " << endl;
    cin >> p;
    cout<<"Answer is : "<<pow(n, p)<<endl; //ishi ki value n and p upr (int num, int po) me store ho rahi hogi.Ishi ko call by value bolte hai.
    return 0;
}