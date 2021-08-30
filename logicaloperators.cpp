#include <iostream>
using namespace std;
//WAP TO OUTPUT WHETHER A NUMBER IS DIVISIBLE BY BOTH 2 AND 3 OR DIVISIBLE BY ONLY ONE OF THEM.
int main()
{
    int n;
    cin>>n;

    if (n%2==0 && n%3==0) //Both conditins reading will be true here because we used &&.
    {
        cout<<"Divisible by both"<<endl;
    }
    else if (n%2==0)
    {
       cout<<"Divisibloe by only 2"<<endl;
    }
    else if (n%3==0)
    {
       cout<<"Divisibloe by only 3"<<endl;
    }
    else 
    {
       cout<<"Divisibloe by none"<<endl;
    }
    
    
    return 0;
}