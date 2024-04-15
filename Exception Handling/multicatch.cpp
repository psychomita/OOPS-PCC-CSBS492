#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 2 integer values (non-consecutive or non-equal)"<<endl;
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x==1)
            throw(x);
        else if(x==0)
            throw('x');
        else if(x==-1)
            throw 1.0;
        else
            cout<<"Difference: "<<x<<endl;
    }
    catch(char as)
    {
        cout<<"Exception caught: Equal integers"<<endl;
    }
    catch(int a)
    {
        cout<<"Exception caught: Consecutive integers"<<endl;
    }
    catch(double s)
    {
        cout<<"Exception caught: Consecutive integers"<<endl;
    }
}