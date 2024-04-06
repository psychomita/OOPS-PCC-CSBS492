#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2,i,j,k;
	cout<<"Enter the number of rows and columns of the 1st matrix :\n";
	cin>>r1>>c1;
	cout<<"Enter the number of rows and columns of the 2nd matrix :\n";
	cin>>r2>>c2;
	while(c1!=r2)
	{
		cout<<"Error! Column of 1st matrix is not equal to Row of 2nd matrix.\n";
		cout<<"Enter the number of rows and columns of the 1st matrix :\n";
		cin>>r1>>c1;
		cout<<"Enter the number of rows and columns of the 2nd matrix :\n";
		cin>>r2>>c2;
	}
	int a[r1][c1],b[r2][c2];
	cout<<"Enter the elements of the 1st matrix :\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			cin>>a[i][j];
	}
	cout<<"Enter the elements of the 2nd matrix :\n";
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
			cin>>b[i][j];
	}
	int multiply[r1][c2];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			multiply[i][j]=0;
			for(k=0;k<c1;k++)
				multiply[i][j]+=a[i][k]*b[k][j];
		}
	}
	cout<<"The matrix formed after multiplication is :\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
			cout<<multiply[i][j]<<"\t";
		cout<<"\n";
	}
	return 0;
}
