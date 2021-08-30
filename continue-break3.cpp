#include <iostream>
using namespace std;
/*print all prime number between a and b*/
/*Means b/w two numbers eg:two num 10and 20 Output: 11 13 17 19*/
int main()
{
    int a,b;
    cin>>a>>b;

    for (int num=a; num<=b; num++)
    {   
        int i;
        for ( i = 2; i < num; i++)
        {
            if (num%i==0)
            {
               break;
            }
            
        }
        if (i==num)
        {
            /* code */
             cout<<num<<endl;
        }
         
    }
    
    return 0;
}
