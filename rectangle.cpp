#include <iostream>
using namespace std;
//WRITE A PROGRAM TO PRINT A RECTANGLE PATTERN IN WHICH THERE USER WILL GIVE INPUT OF NROWS AND COLUMNS
int main()
{
    int row, col;

    cin>>row>>col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}