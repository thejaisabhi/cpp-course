#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial;
    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int n, r;
    cin >> n >> r;

    int ans = fact(n) / (fact(n - r) * fact(r));
    return 0;
}