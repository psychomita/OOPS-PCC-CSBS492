#include<iostream>
#define MAX 100
using namespace std;

class Quick
{	
	private:
		int a[MAX];	
	public:
		Quick(int arr[], int n)
		{
			for(int i=0;i<n;i++)
			{
				a[i]=arr[i];
			}
		}		
		int partition(int min,int max)
		{
			int pivot, left, right;
			pivot=min;
			left=min;
			right=max;
			while(left<=right)
			{
				while(a[left]<=a[pivot]) 
					left++;
				while(a[right]>a[pivot]) 
					right--;
				if(left<right)
					swap(a[left], a[right]);
			}
			swap(a[min],a[right]);
			return right;
		}
		
		void quickSort(int min, int max)
		{
			if(max>min)
			{
				int p=partition(min,max);
				quickSort(min,p-1);
				quickSort(p+1,max);
			}
		}		
		void printArray(int size)
		{
			for(int i=0;i<size;i++)
				cout<<a[i]<<"\t";
			cout<<endl;
		}		
	
		~Quick(){}		
};

int main()
{
	int i,n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[MAX];
	cout<<"Enter the array elements :"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
	Quick obj1(arr,n);
	obj1.quickSort(0,n-1);
	obj1.printArray(n);
	return 0;
}

