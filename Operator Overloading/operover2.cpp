#include<iostream>
#include<string.h>
using namespace std;

class String
{
    string s;
    public:
        String()
        {
            s="";
        }
        String(string str)
        {
            s.append(str);
        }
        void operator=(String);
        String operator+(String);
        bool operator==(String);
        void print()
        {
            cout<<s<<endl;
        }
};

void String :: operator = (String obj)
{
    s.append(obj.s);
}

bool String :: operator ==(String obj)
{
    if(s.compare(obj.s)==0)
        return true;
    else    
        return false;
}

String String :: operator + (String obj1)
{
    String obj2;
    obj2.s=s.append(obj1.s);
    return obj2;
}


int main()
{
    string str;
    cout<<"Enter string 1: ";
    getline(cin,str);
    String s1;
    String s2(str);
    s1=s2;
    cout<<"Enter string 2: ";
    getline(cin,str);
    String s3;
    String s4(str);
    s3=s4;
    bool r= s1==s3;
    if(r==true)
        cout<<"The 2 strings are same"<<endl;
    else
        cout<<"The 2 strings are different"<<endl;
    String s5=s1+s3;
    cout<<"Resultant string is: "<<endl;
    s5.print();
    return 0;
}