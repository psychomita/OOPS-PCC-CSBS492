#include<iostream>
#include<string>
using namespace std;
class person
{
 	string name;
    int id,dob,salary;
    public :
 	    void getdata()
        {
 		    cout<<"Enter name : ";
 		    cin>>name;				
 		    cout<<"Enter ID : ";
 		    cin>>id;		
 		    cout<<"Enter DOB : ";
 		    cin>>dob; 		
 		    cout<<"Enter salary: ";
 		    cin>>salary;		
 	    }	        			
 	
        void display()
        {
 		    cout<<endl<<"Name : "<<name<<endl;	
 		    cout<<"ID : "<<id<<endl;	
 		    cout<<"DOB : "<<dob<<endl;
 		    cout<<"Salary: "<<salary<<endl;
 	    }	
};
 int main()
 {
 	person p1;
 	p1.getdata();
 	p1.display(); 	
 	return 0;
}
