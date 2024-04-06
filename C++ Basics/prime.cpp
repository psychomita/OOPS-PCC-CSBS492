#include<iostream>
#include<math.h>
using namespace std;
int prime(int n)
{
	int i,count=0;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
			count++;
		if(count>2)
			return 0;
	}
	return 1;
}
int main()
{
	int i;
	cout<<"The prime numbers between 1 and 100 are :\n";
	for(i=1;i<=100;i++)
	{
		if(prime(i)==1)
			cout<<i<<"\t";
	}
	cout<<"\n";
	return 0;
}
