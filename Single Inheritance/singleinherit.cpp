#include <iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		Base(int a, int b)
		{
			x=a;
			y=b;
		}
		void put()
		{
			cout<<"1st value: "<<x<<endl<<"2nd value: "<<y<<endl;
		}
	~Base() {}
};

class Derived : public Base
{
	int a,b,z;
	public:
		Derived(int a, int b): Base(x,y) {}
		void product()
		{
			z=a*b;
		}
		void display()
		{
			cout<<"The product of the 2 numbers is: "<<z<<endl;
		}
};

int main()
{
	int a,b;
	cout<<"Enter 1st integer: ";
	cin>>a;
	cout<<"Enter 2nd integer: ";
	cin>>b;
	Derived obj(a,b);
	obj.put();
	obj.product();
	obj.display();
	return 0;
}
