#include <iostream>
using namespace std;
//BOTH INCREMENT AND DECREMENT
int main()
{
    int i = 0;
     
      //0     //0    //1   //1  
    i = i++ - --i + ++i - i--;
 //MAIN VALUES     //1     //0    //1  //0

    cout<<i<<endl; 
    return 0;
}