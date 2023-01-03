//Vehicle Inheritance

#include<iostream>
using namespace std;

class Vehicle
{
    public:
        int mileage,price;
       
    void get_data()
    {
        cout<<"Enter mileage and price:"<<endl;
        cin>>mileage>>price;
    }
    void display_data()
    {  
        cout<<"Mileage and Price is\n:";
        cout<<mileage<<endl;
        cout<<price<<endl;
    }
};

class Car : public Vehicle
{
    public:
        int ownership_cost,seating_capacity;
        float warranty;
        string fuel_type;
   
    void get_data()
    {
        cout<<"Enter Fuel Type(Petrol or Diesel):";
        cin>>fuel_type;
        cout<<"Enter Ownership Cost:";
        cin>>ownership_cost;
        cout<<"Enter Seating Capacity:";
        cin>>seating_capacity;
        cout<<"Enter Warranty(Years):";
        cin>>warranty;
        Vehicle::get_data();
    }
     void display_data()
    {  
        cout<<"Car details are:---\n";
        cout<<"The Fuel Type is:-\n"<<fuel_type<<endl;
        cout<<"The Ownership Cost is:-\n"<<ownership_cost<<endl;
        cout<<"The Seating Capacity is:-\n"<<seating_capacity<<endl;
        cout<<"The Warranty is:-\n"<<warranty<<"years"<<endl;
        Vehicle::display_data();
    }
};

class Bike : public Vehicle
{
    public:
        int no_of_cylinders,no_of_gears;
        float tank_size;
        string cooling_type,wheel_type;
       
    void get_data()
    {
        cout<<"Enter the Number of Cylinders:";
        cin>>no_of_cylinders;
        cout<<"Enter the Number of Gears:";
        cin>>no_of_gears;
        cout<<"Enter the Tank Size:";
        cin>>tank_size;
        cout<<"Enter Cooling Type:";
        cin>>cooling_type;
        cout<<"Enter Wheel Type:";
        cin>>wheel_type;
        Vehicle::get_data();
    }
    void display_data()
    {  
        cout<<"Bike details are:---\n";
        cout<<"Number of Cylinders are:-\n"<<no_of_cylinders<<endl;
        cout<<"Number of Gears are:-\n"<<no_of_gears<<endl;
        cout<<"The Tank Size is(In Litres):-\n"<<tank_size<<endl;
        cout<<"Cooling Type is:-\n"<<cooling_type<<endl;
        cout<<"Wheel Type is:-\n"<<wheel_type<<endl;
        Vehicle::display_data();
    }
};

class Audi : public Car
{
    public:
        string model_type;
    void get_data()
    {
        cout<<"Enter model type of Audi:-"<<endl;
        cin>>model_type;
        Car::get_data();
    }
    void display_data()
    {  
        cout<<"The Model type is :-\t";
        cout<<model_type<<endl;
        Car::display_data();
    }
};

class Ford : public Car
{
    public:
        string model_type;
    void get_data()
    {
        cout<<"Enter Model type of Ford:-"<<endl;
        cin>>model_type;
        Car::get_data();
    }
     void display_data()
    {  
        cout<<"The Model type is :-\t";
        cout<<model_type<<endl;
        Car::display_data();
    }
   
};

class Bajaj : public Bike
{
    public:
        string make_type;
    void get_data()
    {
        cout<<"\n\nEnter make type of Bajaj:-"<<endl;
        cin>>make_type;
        Bike::get_data();
    }
    void display_data()
    {  
        cout<<"The Make type is :-\n";
        cout<<make_type<<endl;
        Bike::display_data();
    }
};
class TVS : public Bike
{
    public:
        string make_type;
    void get_data()
    {
        cout<<"\n\nEnter make type of TVS:-"<<endl;
        cin>>make_type;
        Bike::get_data();
    }
    void display_data()
    {  
        cout<<"The Make type is :-\n";
        cout<<make_type<<endl;
        Bike::display_data();
    }
};

int main()
{
    Audi A;
    Ford F;
    A.get_data();
    F.get_data();
    A.display_data();
    F.display_data();
    Bajaj B;
    TVS T;
    B.get_data();
    T.get_data();
    B.display_data();
    T.display_data();
    return 0;
}
