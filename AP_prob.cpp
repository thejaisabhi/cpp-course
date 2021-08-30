/*PRINT nth TERM OF an A.P. AND SUM OF nth TERM OF AN A.P*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 5;
    int d = 2;
    int an = 0;
    int sn = 0;
    for (int i = 1; i <= n; i++)
    {
        /*nth term*/ an = a + ((i - 1) * d);
        cout <<"Term"<< i << " = "<<an<<endl;
        /*sum sn*/ sn = sn + an;
    }
    cout<<"SUM = "<<sn<<endl;
    return 0;
}