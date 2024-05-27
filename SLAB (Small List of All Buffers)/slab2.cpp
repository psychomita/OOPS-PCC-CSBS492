#include<iostream>
#include<string.h>
using namespace std;

class Taxpayer
{
	string name;
	double income,tax;
	public:
		Taxpayer(string,double);
		void calc();
		void display();
};

Taxpayer :: Taxpayer(string n, double i)
{
	name=n;
	income=i;
}

void Taxpayer :: calc()
{
	double r;
	if(income<=10000)
		r=0;
	else if(income>=10001&&income<=20000)
		r=0.1;
	else if(income>=20001&&income<=50000)
		r=0.2;
	else
		r=0.3;
	tax = r * income;
}

void Taxpayer :: display ()
{
	cout<<"Name = "<<name<<endl;
	cout<<"Income = "<<income<<endl;
	cout<<"Tax = "<<tax<<endl;
}

int main()
{
	double in;
	string n;
	cout<<"Enter the name of taxpayer : ";
	getline(cin,n);
	cout<<"Enter the income of taxpayer : ";
	cin>>in;
	Taxpayer obj(n,in);
	obj.calc();
	obj.display();
	return 0;
}
