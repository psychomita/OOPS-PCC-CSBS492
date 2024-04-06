#include<iostream>
using namespace std;

void MIX(int A[], int m, int B[], int n, int C[])
{
	int i,k=0;
	for(i=0;i<m;i++)
	{
		if(A[i]%2==0)
			C[k++]=A[i];
	}
	for(i=0;i<n;i++)
	{
		if(B[i]%2==0)
			C[k++]=B[i];
	}
	for(i=n-1;i>=0;i--)
	{
		if(B[i]%2!=0)
			C[k++]=B[i];
	}
	for(i=m-1;i>=0;i--)
	{
		if(A[i]%2!=0)
			C[k++]=A[i];
	}
}
int main()
{
	int m,n,p,i;
	cout<<"Enter the size of 1st array: ";
	cin>>m;
	int A[m];
	cout<<"Enter the elements of 1st array: ";
	for(i=0;i<m;i++)
		cin>>A[i];
	cout<<"Enter the size of 2nd array: ";
	cin>>n;
	int B[n];
	cout<<"Enter the elements of 2nd array: ";
	for(i=0;i<n;i++)
		cin>>B[i];
	p=m+n;
	int C[p];
	MIX(A,m,B,n,C);
	cout<<"The resultant array is: "<<endl;
	for(i=0;i<p;i++)
		cout<<C[i]<<" ";
	cout<<endl;
	return 0;
}
