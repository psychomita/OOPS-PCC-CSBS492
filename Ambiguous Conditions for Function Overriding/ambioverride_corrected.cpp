#include<iostream>
using namespace std;

class A 
{
	public:
		void func() 
		{
			int a,b;
			cout<<"Enter 2 numbers: ";
			cin>>a>>b;
			cout<<"Sum: "<<(a+b)<<endl; 
		}
};

class B 
{
	public:
		void func() 
		{
			int c,d;
			cout<<"Enter 2 numbers: ";
			cin>>c>>d;
			cout<<"Product: "<<(c*d)<<endl; 
		}
};

class C: public A, public B {};

int main() 
{
	C obj;
	obj.A::func();
	obj.B::func();
	return 0;
}


