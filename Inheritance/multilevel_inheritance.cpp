#include<iostream>
using namespace std;

class Base1
{
    protected:
        int a,b;
    public:
        Base1(int c, int d) : a(c), b(d) {}
};

class Base2: public Base1
{
    protected:
        int sum;
    public:
        Base2(int c, int d): Base1(c,d),sum(0) 
        {
            sum=a+b;
            cout<<"Sum= "<<sum<<endl;
        }
};

class Derived: public Base2
{
    protected:
        int diff;
    public:
        Derived(int c, int d): Base2(c,d),diff(0) 
        {
            diff=c-d;
            cout<<"Difference= "<<diff<<endl;
        }
};

int main()
{
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    Derived obj(a,b);
    return 0;
}