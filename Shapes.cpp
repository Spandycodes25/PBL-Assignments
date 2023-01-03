//Shapes

	
#include<iostream>
using namespace std;

class Shape
{
    public:
        double a,b;
    void get_data()
    {
        cin>>a>>b;
    }
    virtual void display_area()=0;
};

class Triangle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of Triangle:"<<0.5*a*b<<endl;
    }
};

class Rectangle : public Shape
{
    public:
    void display_area()
    {
        cout<<"Area of Rectangle is:"<<a*b<<endl;
    }
};

int main()
{
    int choice;
    Triangle t;
    Rectangle r;
    do
    {
        cout<<"Enter area operation to be carried out on:/n1.Triangle/n2.Rectangle/n3.Exit";
        cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Enter base and altitude";
            t.get_data();
            t.display_area();
            break;
        }
   
        case 2:
        {
            cout<<"Enter length and breadth";
            r.get_data();
            r.display_area();
            break;
        }
        case 3:
            break;
       
    }
    }while(choice!=3);
    return 0;
}
