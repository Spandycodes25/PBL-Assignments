//Student Database

#include<iostream>
#include<string.h>
using namespace std;

class student
{
    private:
    char name[20];
    char Dob[10];
    char bg[10];
    char divi[10];
    char contact_address[30] ;
    int roll, standard;
    long int tel_no;
   
    public:
    void get_data()
    {
        cout<<"\n----Welcome to Student Database----\n";
        cout<<"\nEnter Name of the student:";
        cin>>name;
        cout<<"\nEnter students Roll Number:";
        cin>>roll;
        cout<<"\nEnter students Standard(class):";
        cin>>standard;
        cout<<"\nEnter students Division:";
        cin>>divi;
        cout<<"\nEnter students DATE OF BIRTH:";
        cin>>Dob;
        cout<<"\nEnter students Blood Group:";
        cin>>bg;
        cout<<"\nEnter students Contact Address:";
        cin>>contact_address;
        cout<<"\nEnter students telephone number:";
        cin>>tel_no;

       
    }
       static int count;
        static void count_fun()
        {
            count++;
        }
   
    inline void display_data()
    {
   
    cout<<"\nName of Student is:"<<name;
    cout<<"\nStudents Roll Number is:"<<roll;
    cout<<"\nstudents class is:"<<standard;
    cout<<"\nStudents Division is:"<<divi;
    cout<<"\nStudents DATE OF BIRTH is:"<<Dob;
    cout<<"\nStudents Blood Group is:"<<bg;
    cout<<"\nStudents Contact Address is:"<<contact_address;
    cout<<"\nStudents telephone number is:"<<tel_no;
   
    }

    student()
    {
        cout<<"\n This is the constructor\n";
    }
    ~student()
    {
        cout<<"\nThis is destructor and this is also redundant";
    }

};
 //static int count =0;
static int count=0;
        static void count_fun()
        {
            count++;
        }
   

int main()
{
    int n, i;
    cout<<"Enter number of students:\n";
    cin>>n;
    student s[n];
    for(i=0; i<n; i++)
    {
    s[i].get_data();
    }
    for(i=0; i<n; i++)
    {
    s[i].display_data();
    }
   
    return 0;
}
