#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s1;
	cout<<"Enter a string: ";
	getline(cin,s1);
	
	cout<<"Length of the string: "<<s1.length()<<endl;
	
	cout<<"Size of the string: "<<s1.size()<<endl;
	
	cout<<"Capacity of the string is: "<<s1.capacity()<<endl;
	
	int ind;
	cout<<"Enter an index: ";
	cin>>ind;
	cout<<"The character at index "<<ind<<": "<<s1[ind]<<endl;

	string sub = s1.substr(0,ind);
	cout<<"Substring of s1 from 0 to "<<ind<<": "<< sub<<endl;
	
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	cout<<"First occurence of "<<ch<<": "<<s1.find(ch)<<endl;
	
	string s2;
	cout << "Enter another string: ";
	getline(cin.ignore(),s2);
	string s3 = s1 + s2;
	cout << "Concatenation of string 1 and string 2: "<<s3<<endl;
	
	string s4 = s1.replace(1, 4, "zzz");	
	cout << "Replaced in string 1: "<<s4<<endl;
	
	string s5 = s2.insert(2, "zzz");	
	cout << "Inserted in string 2: "<<s5<<endl;
	
	string s6 = s1.erase(1,4);
	cout<<"Erased from string 1: "<<s6<<endl;
	
	return 0;
}
