#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

class Overload
{
	char *p;
	int len;
	public:
		Overload()
		{
			p=0;
			len=0;
		}
		
		Overload(const char*);
		Overload operator + (Overload);		
		
		void show()
		{
			cout<<p<<endl;
		}		
};

Overload :: Overload(const char* s)
{
	len=strlen(s);
	p=new char[len+1];
	strcpy(p,s);
}

Overload Overload :: operator +(Overload obj)
{
	Overload temp;
	temp.len= len+obj.len;
	temp.p=	new char[temp.len+1];
	strcpy(temp.p,p);
	strcat(temp.p,obj.p);
	return temp;
}

int main()
{
	int x,y,z,len1,len2;
	cout<<"Enter 2 integer values"<<endl;
	cin>>x>>y;
	z=x+y;
	cout<<"Sum of the values after using '+' on integer data types: "<<z<<endl<<endl;
	
	cout<<"Enter length of string 1: ";
	cin>>len1;
	char* a = new char[len1+1]; 
	cout<<"Enter string 1: ";
	cin>>a;
	
	cout<<"Enter length of string 2: ";
	cin>>len2;
	char* b = new char[len2+1]; 
	cout<<"Enter string 2: ";
	cin>>b;
	
	Overload obj1(a);
	cout<<endl<<"1st String Object: ";
	obj1.show();
	
	Overload obj2(b);
	cout<<"2nd String Object: ";
	obj2.show();
	
	Overload obj3;
	obj3= obj1+obj2;
	cout<<"Concatenated String Object after using '+' on string object data types: ";
	obj3.show();
	
	return 0;
}
