#include<iostream>
using namespace std;

int main()
{
	int i,j,n,ch;
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	int arr[n];
	cout<<"1 for accepting array elements\n2 for displaying array elements"<<endl;
	cout<<"3 for sorting array using Insertion Sort\n4 for sorting array using Selection Sort\n";
	cout<<"5 for sorting array using Bubble Sort\n6 for Exit\n";
	while(1)
	{
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter the elements of the array: "<<endl;
				for(i=0;i<n;i++)
					cin>>arr[i];
				cout<<"Array elements accepted"<<endl;
				break;
			case 2:
				cout<<"The array elements are: ";
				for(i=0;i<n;i++)
					cout<<arr[i]<<" ";
				cout<<endl;
				break;
			case 3:
				int key;
				for(i=1;i<n;i++) 
				{
					key=arr[i];
					j=i-1;
					while(j>=0 && arr[j]>key) 
					{
						arr[j+1]=arr[j];
						j-=1;
					}
					arr[j+1]=key;
				}
				cout<<"Array has been sorted using Insertion Sort"<<endl;
				break;
			case 4:
				int min;
				for(i=0;i<n-1;i++)
				{
					min=i;
					for(j=i+1;j<n;j++) 
					{
						if(arr[j]<arr[min])
						    min=j;
					}
					swap(arr[i],arr[min]);
				}
				cout<<"Array has been sorted using Selection Sort"<<endl;
				break;
			case 5:
				for(i=0;i<n-1;i++)
				{
					for(j=0;j<n-1-i;j++)
					{
						if(arr[j]>arr[j+1])
							swap(arr[j],arr[j+1]);
					}
				}
				cout<<"Array has been sorted using Bubble Sort"<<endl;
				break;
			case 6:
				exit(1);
			default:
				cout<<"Wrong Choice entered"<<endl;
		}
	}
	return 0;
}
	
