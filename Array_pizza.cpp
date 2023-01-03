//Store Array

#include<iostream>

using namespace std;

class Info
{
string name;
int choice,p=0,e=0,b=0,n=0,both=0;

public:
void get_data()
{
cout<<"Enter you Name";
cin>>name;
cout<<"\n1.Pizza\n2.Burger\n3.Both\n4.None";
cin>>choice;
if(choice==1)
p++;
else if(choice==2)
b++;
else if(choice==3)
both++;
else
n++;
}
void display_data()
{
cout<<"\nNumber of customers who like either Pizza or Burger or Both"<<(p+b+both);
cout<<"\nNumber of customers who like both Pizza and Burger"<<both;
cout<<"\nNumber of customers who like only Pizza not Burger"<<p;
cout<<"\nNumber of customers who like either only Burger not Pizza"<<b;
cout<<"\nNumber of customers who like neither Pizza nor Burger"<<n;
}

};

int main()
{
int ch, i=0;
Info ob;
while(1)
{
cout<<"\n1.New entry\n2.Exit";
cout<<"\nEnter choice:";
cin>>ch;
if(ch==2)
break;
ob.get_data();
}
cout<<"\nDisplaying Data";
ob.display_data();

return 0;

}
