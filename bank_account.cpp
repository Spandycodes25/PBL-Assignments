//Bank Account

#include<iostream>
using namespace std;

class bank_account
{
char name[30], actype[30];
long long int accno;
int bal, l;
public:
bank_account()
    {
        cout<<"\nEnter the name of the Depositor:";
        cin>>name;
        cout<<"\nEnter account type:";
        cin>>actype;
        do
        {
        cout<<"\nEnter account number of length 10:";
        cin>>accno;
        }while(accno<1000000000 || accno>9999999999);
        cout<<"\nAccount balance:";
        cin>>bal;
    }
    void deposit(int amt)
    {
        bal= bal + amt;
        cout<<"Balance of the account after deposit is:"<<bal;
    }
    void withdraw(int amt)
    {
        if(amt > bal)
        {
            cout<<"Balance to be withdrawn is greater than amount.."<<bal;
        }
        else
        {
            bal = bal - amt;
            cout<<"Balance after withdrawl:"<<bal;
        }
    }
    void display()
    {
        cout<<"Name of the Dpositor:"<<name<<endl;
        cout<<"Account type:"<<actype<<endl;
        cout<<"Account Number"<<accno<<endl;
        cout<<"Account Balance:"<<bal<<endl;
    }
};

int main()
{
    bank_account objectBank;
    int amount, choice;

    do{

        cout<<"-----Menu----"<<endl;
        cout<<"1. Deposit Money"<<endl;
        cout<<"2. Withdraw Money"<<endl;
        cout<<"3. Display account details"<<endl;
        cout<<"4. Quit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nEnter the amount to deposit";
            cin>>amount;
            objectBank.deposit(amount);
            break;

            case 2:
            cout<<"\nEnter the amount to Withdraw";
            cin>>amount;
            objectBank.withdraw(amount);
            break;

            case 3:
            objectBank.display();
            break;

            case 4:
            break;
           
         
        }
       
     }while(1);
     
     return 0;
     
}
