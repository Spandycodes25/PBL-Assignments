//ADT

#include<iostream>
using namespace std;

class ADT
{
int row1, row2, col1, col2;
int mat1[4][4], mat2[4][4], add[4][4], sub[4][4], prod[4][4],i,j,k;
public:
void get_data()
{
try
{
cout<<"Enter the number of Rows of Matrix 1:";
cin>>row1;
cout<<"Enter the number of Rows of Matrix 2:";
cin>>row2;
cout<<"Enter the number of Rows of Matrix 1:";
cin>>col1;
cout<<"Enter the number of Rows of Matrix 2:";
cin>>col2;
if(row1>4 || row2>4 || col1>4 || col2>4)
{
throw exception();
}
else if(col1>row2 || col1<row2)
{
throw 1;
}
else
{
cout<<"Enter  the elements of Matrix 1:\n";
for(i=0; i<row1; i++)
{
for(j=0; j<col1-1;j++)
{
cout<<"mat1["<<i<<"]["<<j<<"]"<<endl;
cin>>mat1[i][j];
}
}
cout<<"Enter  the elements of Matrix 2:\n";
for(i=0; i<row2; i++)
{
for(j=0; j<col2-1;j++)
{
cout<<"mat1["<<i<<"]["<<j<<"]"<<endl;
cin>>mat2[i][j];
}
}
}
}
catch(exception &)
{
cout<<"The size of rows and columns should not exceed 4"<<endl;
}
catch(int a)
{
cout<<"THe number of columns of matrix 1 and rows of matrix 2 should be equal";
}

}

void Add()
{
for(i=0; i<row1; i++)
{
for(j=0; j<col1-1;j++)
{
add[i][j]=mat1[i][j]+mat2[i][j];
cout<<add[i][j]<<"\t";
}
cout<<endl;
}
}
void Sub()
{
for(i=0; i<row1; i++)
{
for(j=0; j<col1-1;j++)
{
sub[i][j]=mat1[i][j]-mat2[i][j];
cout<<sub[i][j]<<"\t";
}
cout<<endl;
}
}
void Multiplication()
{
for(i=0; i<row1; i++)
{
for(j=0; j<col1-1;j++)
{
prod[i][j]=0;
for(k=0;k<col1-1;k++)
{
prod[i][j]=mat1[i][k]*mat2[k][j];
cout<<prod[i][j]<<"\t";
}
}
cout<<endl;
}
}
};

int main()
{
//cout<<"Hello";
ADT obj;
int ch;
obj.get_data();
do
{
cout<<"Enter the operation you want to perform on Matrices:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit"<<endl;
cin>>ch;
switch(ch)
{
case 1:
obj.Add();
break;
case 2:
obj.Sub();
break;
case 3:
obj.Multiplication();
break;
case 4:
break;
}
}while(ch!=4);
return 0;
}
