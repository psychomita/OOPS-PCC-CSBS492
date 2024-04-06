#include <iostream>
using namespace std;

class Pattern
{
	public:
		virtual void make(int n) = 0;
};

class Stars: public Pattern
{
	void make(int n) override
	{
		int i,j;
		cout<<"Pattern 1:"<<endl;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				cout<<"* ";
			cout<<endl;
		}
		cout<<endl;
	}
};

class Numbers: public Pattern
{
	void make(int n) override
	{
		int i,j;
		cout<<"Pattern 2:"<<endl;
		for(i=1;i<=n;i++)
		{
			for(j=n;j>=i;j--)
				cout<<j<<" ";
			cout<<endl;
		}
	}
};

int main()
{
	int a;
	cout<<"Enter the number of rows for patterns: ";
	cin>>a;
	cout<<endl;
	Stars s;
	Numbers n;
	Pattern* p=&s;
	p->make(a);
	p=&n;
	p->make(a);
	return 0;
}
