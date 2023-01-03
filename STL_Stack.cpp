//STL Stack

#include<iostream>
#include<stack>
using namespace std;

int main()
{
int n1, n2, n, num, num1, num2, carry, sum;
stack<int>a;
stack<int>b;
stack<int>c;
carry=0;

cout<<"\nPlease specify the number of bits of first number";
cin>>n1;
cout<<"\nPlease specify the number of bits of second number";
cin>>n2;

cout<<"\nEnter thenumber bit by bit";

cout<<"\nEnter the first number";
for(int i=0; i<n1; i++)
{
cin>>num1;
a.push(num1);
}

cout<<"\nEnter the second number";
for(int i=0; i<n2; i++)
{
cin>>num2;
b.push(num2);
}

while(!a.empty() && !b.empty())
{
num1 = a.top();
num2 = b.top();

a.pop();
b.pop();

if(num1+num2+carry==0)
{
sum=0;
carry=0;
c.push(sum);
}
else if(num1+num2+carry==1)
{
sum=1;
carry=0;
c.push(sum);
}
else if(num1+num2+carry==2)
{
sum=0;
carry=1;
c.push(sum);
}
else if(num1+num2+carry>2)
{
sum=1;
carry=1;
c.push(sum);
}
}

if(carry == 1)
{
c.push(carry);
}

cout<<"\nAddtion is:";
while(!c.empty())
{
num = c.top();
c.pop();
cout<<num;
}

return 0;

}
