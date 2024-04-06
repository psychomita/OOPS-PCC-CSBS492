#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void calc(int a, int b)
		{
			int sum=a+b;
			cout<<"Sum= "<<sum<<endl;
		}
};

class Derived1: public Base
{
	void calc(int a, int b) override
	{
		int diff=a-b;
		cout<<"Difference= "<<diff<<endl;
	}
};

class Derived2: public Base
{
	void calc(int a, int b) override
	{
		int mul=a*b;
		cout<<"Multiplicated Value= "<<mul<<endl;
	}
};

class Derived3: public Base
{
	void calc(int a, int b) override
	{
		int div=a/b;
		cout<<"Divided Value= "<<div<<endl;
	}
};

int main()
{
	int a,b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	Base obj1;
	Derived1 obj2;
	Derived2 obj3;
	Derived3 obj4;
	Base* t=&obj1;
	t->calc(a,b);
	t=&obj2;
	t->calc(a,b);
	t=&obj3;
	t->calc(a,b);
	t=&obj4;
	t->calc(a,b);
	return 0;
}
	
