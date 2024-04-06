#include <iostream>
using namespace std;

class Overload
{	
	public:
		Overload() {}
		
		void area(int);
		int area(int,int);
		float area(float,float);
		float area(float);
	
	~Overload() {}
};

void Overload :: area (int a)
{
	int area = a*a;
	cout<<"Area of square is "<<area<<endl<<endl;
}

int Overload :: area (int l, int b)
{
	int area = l*b;
	return area;
}

float Overload :: area (float b, float h)
{
	float area = 0.5*b*h;
	return area;
}

float Overload :: area (float r)
{
	float area = 3.142*r*r;
	return area;
}

int main()
{
	int a,l,b,rec;
	float base,height,r,tri,cir;
	Overload obj;
	
	cout<<"Enter the side length of square"<<endl;
	cin>>a;
	obj.area(a);
	
	cout<<"Enter the length and breadth of rectangle"<<endl;
	cin>>l>>b;
	rec = obj.area(l,b);
	cout<<"Area of rectangle is "<<rec<<endl<<endl;
	
	cout<<"Enter the base and height of triangle"<<endl;
	cin>>base>>height;                
	tri = obj.area(base,height);
	cout<<"Area of triangle is "<<tri<<endl<<endl;
	
	cout<<"Enter the radius of circle"<<endl;
	cin>>r;
	cir = obj.area(r);
	cout<<"Area of circle is "<<cir<<endl<<endl;
	
	return 0;
}
