#include <iostream>
using namespace std;
//A loop we are printing numbers from 1-100; Now the numbers that are divisible by 3 Just skip that numbber//
int main()
{
    for (int num = 1; num <= 100; num++)
    {
        if (num%3==0)
        {
           continue ;
        }
        
      cout<<num<<endl;
    }
    return 0;
}