#include<iostream>
using namespace std;

int main()

{
   char c;
   int smlatter,caplatter;
   cout<<"ENTER AN ALPHABET\n";
   cin>>c;

   smlatter = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   caplatter = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

   if (smlatter || caplatter)
   {
      cout<<"a vowel"<<c;
   }
   else{
      cout<<"a consonant"<<c;
   }   

 return 0;
}