//Names in Alphabetical order

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout<<"How many names do you want to enter";
    cin>>n;
    char names[n][20], temp[20];
    int i,j;
    cout<<"Enter names:\n";
   
    for(i=0;i<n;i++)
    {
        cin>>names[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(strcmp(names[j-1], names[j])>0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j-1]);
                strcpy(names[j-1], temp);
            }
        }
    }
    cout<<"Names in alphabetical order:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<names[i]<<"\n";
    }
}
