#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cout<<"Enter the number of rows in the matrix :\n";
	cin>>m;
	cout<<"Enter the number of columns in the matrix :\n";
	cin>>n;
	int a[m][n];
	cout<<"Enter the elements of the matrix :\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	cout<<"The original matrix is :\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]<<"\t";
		cout<<"\n";
	}
	int trans[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			trans[i][j]=a[j][i];
	}
	cout<<"The transpose of the matrix is :\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<trans[i][j]<<"\t";
		cout<<"\n";
	}
	return 0;
}
	
	
