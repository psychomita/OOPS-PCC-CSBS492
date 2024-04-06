#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int i,n;
	cout<<"Enter a string :\n";
	cin>>s;
	n=s.length();
	for(i=0;i<n/2;i++)
	{
		if(s.at(i)!=s.at(n-1-i))
		{
			cout<<"The string is not a palindrome.\n";
			return 0;
		}
	}
	cout<<"The string is a palindrome.\n";
	return 0;
}
