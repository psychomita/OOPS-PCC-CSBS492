#include <iostream>
using namespace std;

class Overload
{
	public :
		Overload() {}
		void areavol(int);
		void areavol(long);
		void volarea(int,int);
		void volarea(int,int,int);
	~Overload() {}
};

void Overload :: areavol (int a)
{
	int area = a*a;
	cout<<"Area of square: "<<area<<endl;
}

void Overload :: areavol (long a)
{
	long volume = a*a*a;
	cout<<"Volume of cube: "<<volume<<endl;
}

void Overload :: volarea (int l, int b = 10) //Ambiguity resolved
{
	int area = l*b;
	cout<<"Area of rectangle: "<<area<<endl;
}

void Overload :: volarea (int l, int b, int h)
{
	int volume = l*b*h;
	cout<<"Volume of cuboid: "<<volume<<endl;
}

int main()
{
	int a;
	float c;
	Overload obj;
	cout<<"Enter a float value: ";
	cin>>c;
	obj.areavol((int)c); //Ambiguity resolved
	cout<<"Enter a integer value: ";
	cin>>a;
	obj.volarea(a);
	return 0;
}
