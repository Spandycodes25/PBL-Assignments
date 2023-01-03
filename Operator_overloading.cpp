//Complex Numbers

#include <iostream>

using namespace std;
class complex
{   public:
    int real,img;
   
            complex()
            {
                real=0;
                img=0;
            }
            complex(int r,int i)
            {
                real=r;
                img=i;
            }
        complex operator +(complex c)
        {
            complex sum;
            sum.real=real+c.real;
            sum.img=img +c.img;
            return sum;
        }
        complex operator *(complex c)
        {
            complex product;
            product.real=(real*c.real)-(img*c.img);
            product.img=(real*c.img)+(img*c.real);
            return product;
        }
        friend istream &operator>>(istream &, complex&c);
        friend ostream &operator<<(ostream &, complex&c);
       
};

istream &operator>>(istream &cin, complex&c)
{
    cin>>c.real>>c.img;
    return cin;
}

ostream &operator<<(ostream &cout, complex&c)
{
    cout<<c.real<<"+i"<<c.img;
    return cout;
}


int main()
{
    complex c1,c2,sum, product;
    cout<<"Enter Real and Imaginary values for 1st complex number:"<<endl;
    cin>>c1;
    cout<<"Enter Real and Imaginary values for 2nd complex number:"<<endl;
    cin>>c2;
    sum=c1+c2;
    cout<<"Sum of the given complex numbes is:"<<sum<<endl;
    product=c1*c2;
    cout<<"Product of the given complex numbes is:"<<product<<endl;
   /* cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
   
    cout<<c4.real<<"+"<<c4.img<<"i"<<endl;*/
    return 0;
}
