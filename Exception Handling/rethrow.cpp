#include<iostream>
using namespace std;

void divide(int a, int b, int c)
{
    if((a-b)!=0)
    {
        int r=c/(a-b);
        cout<<"Result: "<<r<<endl;
    }
    else
        throw(a-b);
}

int main()
{
    int a,b,c;
    cout<<"Enter 3 integers"<<endl;
    cin>>a>>b>>c;
    try
    {
        divide(a,b,c);
    }
    catch(int i)
    {
        cout<<"Exception caught: Division by zero error"<<endl;
    }
    return 0;
}