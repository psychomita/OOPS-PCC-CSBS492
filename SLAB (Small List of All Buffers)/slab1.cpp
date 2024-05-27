#include<iostream>
#include<string.h>
using namespace std;

class Customer
{
    int id,units;
    string name;
    public:
        Customer(int,int,string);
        double calc();
        void display();
};

Customer :: Customer(int i, int u, string n)
{
    id=i;
    units=u;
    name=n;
}

double Customer :: calc()
{
    int bill;
    if(units<=100)
       bill=units*0.6;
    else if(units<=300)
        bill=60+((units-100)*0.8);
    else 
        bill=60+160+((units-300)*0.9);
    if(bill<50)
        bill=50;
    if(bill>300)
        bill+=(0.15*bill);
    return bill; 
}

void Customer :: display()
{
    cout<<"\nName: "<<name<<endl;
    cout<<"Customer ID: "<<id<<endl;
    cout<<"Number of units consumed: "<<units<<endl;
    cout<<"Bill: "<<calc()<<endl;
}

int main()
{
    int n,i;
    cout<<"Enter the number of customers: ";
    cin>>n;
    int id[n],units[n];
    string name[n];
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter name of customer "<<(i+1)<<": ";
        cin>>name[i];
        cout<<"Enter ID of customer "<<(i+1)<<": ";
        cin>>id[i];
        cout<<"Enter no. of units consumed by customer "<<(i+1)<<": ";
        cin>>units[i];
        Customer obj(id[i],units[i],name[i]);
        obj.display();
    }
    return 0;
}
