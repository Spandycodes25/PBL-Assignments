//Uppercase Lowercase

#include<iostream>
using namespace std;

int main()
{

char cha;
cout<<"Enter a character (Uppercase or Lowercase or Digit or Special)";
cin>>cha;

if(cha>=65 && cha<=90)
{
cout<<"The character entered is a Uppercase character:\n";
}
else if(cha>=48 && cha<=57)
{
cout<<"The character entered is a Digit\n";
}
else if(cha>=97 && cha<=122)
{
cout<<"The character entered is a Lowercase character\n";
}
else if(cha == '@' || cha == '#' || cha == '$' || cha == '&' || cha == '*')
{
cout<<"You have entered a Special Character\n";
}
else
{
cout<<"Invalid character";
}
}
