#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 integer values"<<endl;
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x!=0)
            cout<<"Result: "<<a/x<<endl;
        else
            throw(x);
    }
    catch(int i)
    {
        cout<<"Exception caught: Division by zero error "<<endl;
    }
    return 0;
}
