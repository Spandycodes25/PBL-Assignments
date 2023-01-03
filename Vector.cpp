//Vector

#include<iostream>
using namespace std;

template<class T>

class vector
{
private:
T v[20];
int size;
public:
void Create();
void Modify();
void Multiplication();
void Display();
};

template<class T>
void vector<T> :: Create()
{
int i;
T value;
char ans;
size=0;

do
{

cout<<"\nEnter the Index and Value:";
cin>>i>>value;
v[i] = value;
size++;
cout<<"\nDo you want to add more elements?:";
cin>>ans;

}while(ans=='y' || ans=='Y');
}

template<class T>
void vector<T> :: Modify()
{
int id;
T new_val;
cout<<"\nEnter the Index you want to Modify:";
cin>>id;
cout<<"\nEnter the new value to be added:";
cin>>new_val;
v[id]=new_val;
}

template<class T>
void vector<T> :: Multiplication()
{
int i;
int scal_val;
cout<<"\nEnter the Scalar value to Multiplied:";
cin>>scal_val;

for(i<0;i<size;i++)
{
v[i] = v[i]*scal_val;
}
}

template<class T>
void vector<T> :: Display()
{
int i;

//cout<<"\nSize of vector is:"<<size;
cout<<"\nElememts in the Vector are as follows";
cout<<"[";

for(i=0;i<size;i++)
{
cout<<v[i]<<" ";
}

cout<<"]";
}

int main()
{
int ch;
vector<int> obj;

do
{
cout<<"Enter the operations you want to perform on the Vector\n1.Create\n2.Modify\n3.Multiplication\n4.Display\n5.Exit";
cin>>ch;

switch(ch)
{
case 1:
obj.Create();
break;

case 2:
obj.Modify();
break;

case 3:
obj.Multiplication();
break;

case 4:
obj.Display();
break;

case 5:
break;
}
}while(ch!=5);

return 0;
}
