#include <iostream>
using namespace std;

class FirstBase 
{
	public:
    		FirstBase(int val) : firstVal(val) {}
    		int getFirstVal()
    		{
        		return firstVal;
    		}
    		int firstVal;
	~FirstBase() {}
};

class SecondBase 
{
	public:
    		SecondBase(int val) : secondVal(val) {}
    		int getSecondVal()
    		{
        		return secondVal;
    		}
    		int secondVal;
	~SecondBase() {}
};

class Derived : public FirstBase, public SecondBase 
{
	public:
    		Derived(int firstVal, int secondVal): FirstBase(firstVal), SecondBase(secondVal) {}
    		void output()
    		{
    			int sum = firstVal + secondVal;
    			cout<<"The sum of the 2 numbers are: "<<sum<<endl;
    		}
	~Derived() {}
};

int main()
{
	int a,b;
	cout<<"Enter 1st integer: ";
	cin>>a;
	cout<<"Enter 2nd integer: ";
	cin>>b;
	Derived obj(a,b);
	obj.output();
	return 0;
}		
		
