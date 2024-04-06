#include<iostream>
using namespace std;
int main()
{
	int i,c,d,res;
	cout<<"The Armstrong numbers between 1 and 500 are:\n";
	for(i=1;i<=500;i++)
	{
		c=i;
		res=0;
		while(c!=0)
		{
			d=c%10;
			res+=d*d*d;
			c/=10;
		}
		if(res==i)
			cout<<i<<"\n";
	}
	return 0;
}
