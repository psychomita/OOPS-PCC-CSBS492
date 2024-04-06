#include <iostream>
using namespace std;

class A 
{
	public:
    		int p;
    		A(int a) : p(a) {}
    		void show()
    		{
        		cout << "1st value: " << p << endl;
    		}
    		~A() {}
};

class B : public A 
{
	public:
		int q;
    		B(int p, int Q): A(p), q(Q) {}
    		void display()
    		{
        		cout << "2nd value: " << q << endl;
    		}
    		~B() {}
};

class C : public A 
{
	public:
    		int r;
    		C(int p, int R): A(p), r(R) {}
    		void output()
    		{
        		cout << "3rd Value: " << r << endl;
    		}
    		~C() {}
};


class D : public B, public C 
{
	public:
    		int s;
    		D(int p, int q, int r): B(p,q), C(p,r), s(p+q+r) {}
    		void print()
    		{
        		cout << "Sum of all Values: " << s << endl;
    		}
    		~D() {}
};

int main() 
{
    int a,b,c;
	cout<<"Enter 1st integer: ";
	cin>>a;
	cout<<"Enter 2nd integer: ";
	cin>>b;
	cout<<"Enter 3rd integer: ";
	cin>>c;
	A obj1(a); //ambiguity arises because of multipath inheritance
	D obj2(a,b,c);
    obj1.show();
    obj2.display();
    obj2.output();
    obj2.print();
    return 0;
}

