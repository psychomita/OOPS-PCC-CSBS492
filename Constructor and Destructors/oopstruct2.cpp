#include<iostream>
using namespace std;

class DB;

class DM
{
    double m,cm;
    public:
        DM(double metre, double centi)
        {
            m=metre;
            cm=centi;
        }
        friend void add(DM,DB,int);
        ~DM() {}
};

class DB
{
    double f,i;
    public:
        DB()
        {
            f=0;
            i=0;
        }
        DB(double feet, double inch)
        {
            f=feet;
            i=inch;
        }
        friend void add(DM,DB,int);
        ~DB() {}
};

void add(DM obj1, DB obj2, int ch)
{
    DB obj3;
    if(ch==2)
    {
        obj1.m*=3.281;
        obj1.cm/=2.54;
        obj3.f=obj1.m+obj2.f;
        obj3.i=obj1.cm+obj2.i;
        cout<<"Resut: "<<obj3.f<<" feet "<<obj3.i<<" inches"<<endl;
    }
    else
    {
        obj2.f/=3.281;
        obj2.i*=2.54;
        obj3.f=obj1.m+obj2.f;
        obj3.i=obj1.cm+obj2.i;
        cout<<"Resut: "<<obj3.f<<" metres "<<obj3.i<<" centimetres"<<endl;
    }
}

int main()
{
    double m,cm,f,i,ch;
    cout<<"Enter the distance in metres and centimetres respectively: ";
    cin>>m>>cm;
    cout<<"Enter the distance in feet and inches respectively: ";
    cin>>f>>i;
    cout<<"Enter 1 for displaying result in metres and centimetres or 2 for displaying result in feet and inches: ";
    cin>>ch;
    DM obj1(m,cm);
    DB obj2(f,i);
    add(obj1,obj2,ch);
    return 0;
}