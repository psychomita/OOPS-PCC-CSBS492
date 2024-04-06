#include<iostream>
using namespace std;

class A
{
	public:
		virtual void Display() = 0; //virtual function
		~A() {}
};

class B: public A
{
	public:
		virtual void Display() = 0; //virtual function
		~B() {}
};

class C: public A
{
	public:
		virtual void Display()
		{
			cout << "Displaying from class C inheriting class A." << endl;
		}
		~C() {}
};

class D: public B
{
	public:
		void Display()
		{
			cout << "Displaying from class D inheriting class B." << endl;
		}
		~D() {}
};
class E: public B
{
	public:
		void Display()
		{
			cout << "Displaying from class E inheriting class B." << endl;
		}
		~E() {}
};
class F: public C
{
	public:
		void Display()
		{ 
			cout << "Displaying from class F inheriting class C." << endl;
		}
		~F() {}
};

int main()
{
	C obj1;
	obj1.Display();
	D obj2;
	obj2.Display();
	E obj3;
	obj3.Display();
	F obj4;
	obj4.Display();	
	return 0;
}
