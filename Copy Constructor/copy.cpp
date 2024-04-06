#include<iostream>
#include<string>
using namespace std;

class Test
{
	private :
		int x;
		double y;
		string z;
	public :
		/* Test()
		{
			x=0;
			y=0.0;
			z="";
		} */
		
		Test(int a, double b, string c)
		{
			x=a;
			y=b;
			z=c;
		}
		
		Test(Test &t)
		{
			x=t.x;
			y=t.y;
			z=t.z;
		}
		
		void output()
		{
			cout<<"1st value : "<<x<<endl;
			cout<<"2nd value : "<<y<<endl;
			cout<<"3rd value : "<<z<<endl;
		}
		
		~Test(){}
};

int main()
{
	int a;
	double b;
	string c;
	cout<<"Enter argument of integer data type"<<endl;
	cin>>a;
	cout<<"Enter argument of double data type"<<endl;
	cin>>b;
	cout<<"Enter argument of string data type"<<endl;
	cin>>c;
	Test t1(a,b,c);
	Test t2(t1);
	t1.output();
	return 0;
}
