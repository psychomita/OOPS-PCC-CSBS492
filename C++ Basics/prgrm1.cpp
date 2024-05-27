#include<iostream>
#include<cmath>
using namespace std;

int factorial(int);

int main()
{
    int x,n,sign=-1,i,j=1;
    double sum=0;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sign*=-1;
        sum+=sign*((pow(x,j))/factorial(j));
        j+=2;
    }
    cout<<"Sine of x= "<<sum<<endl;
    return 0;
}

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n * factorial(n-1);
}