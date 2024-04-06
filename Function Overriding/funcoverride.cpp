#include <iostream>
#include <string>
using namespace std;

class Shape 
{
	protected:
	    string name;
	public:
	    Shape(string n) : name(n) {}                                                                                                            
	    virtual double getArea() const = 0;
	    virtual void display() const 
	    {
		cout << "Shape: " << name << endl;
	    }
};

class Circle : public Shape 
{
	private:
	    double radius;
	public:
	    Circle(string n, double r) : Shape(n), radius(r) {}
	    double getArea() const override 
	    {
		double area = 3.142 * radius * radius;
		return area;
	    }
	    void display() const override 
	    {
		Shape :: display();
		cout << "Radius: " << radius << endl;
		cout << "Area: " << getArea() << endl;
	    }
};

class Rectangle : public Shape 
{
	private:
	    double length;
	    double width;
	public:
	    Rectangle(string n, double l, double w) : Shape(n), length(l), width(w) {}
	    double getArea() const override 
	    {
			double area = length * width;
			return area;
	    }
	    void display() const override 
	    {
			Shape::display();
			cout << "Length: " << length << ", Width: " << width << endl;
			cout << "Area: " << getArea() << endl;
	    }                
};

int main() 
{
    float r,l,b;
    cout<<"Enter radius of circle: ";
    cin>>r;
    Circle circle("Circle",r);
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    Rectangle rectangle("Rectangle",l,b);
    Shape *shape1 = &circle;
    Shape *shape2 = &rectangle;
    shape1->display();
    cout << endl;
    shape2->display();

    return 0;
}

