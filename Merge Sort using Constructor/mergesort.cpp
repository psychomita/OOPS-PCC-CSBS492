#include<iostream>
#define MAX 100
using namespace std;

class Merge
{	
	private:
		int arr[MAX];	
	public:
		Merge(int a[], int n)
		{
			for(int i=0;i<n;i++)
			{
				arr[i]=a[i];
			}
		}		
		void merge(int lb, int mid, int ub)
		{
			int n1,n2,i,j,k;
			n1=mid-lb+1;
			n2=ub-mid;
			int l[n1],r[n2];
			for(i=0;i<n1;i++)
				l[i]=arr[lb+i];
			for(j=0;j<n2;j++)
				r[j]=arr[mid+1+j];
			i=j=0;
			k=lb;
			while(i<n1 && j<n2)
			{
				if(l[i]<=r[j])
				{
					arr[k]=l[i];
					i++;
				}
				else
				{
					arr[k]=r[j];
					j++;
				}
				k++;
			}
			while(i<n1)
			{
				arr[k]=l[i];
				k++;
				i++;
			}
			while(j<n2)
			{
				arr[k]=r[j];
				j++;
				k++;
			}
		}		
		void sort(int lb, int ub)
		{
			if(lb<ub)
			{
				int mid=lb+(ub-lb)/2;
				sort(0,mid);
				sort(mid+1,ub);
				merge(lb,mid,ub);
			}
		}		
		void printArray(int size)
		{
			for(int i=0;i<size;i++)
				cout<<arr[i]<<"\t";
			cout<<endl;
		}		
	
		~Merge(){}		
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
	Merge obj1(arr,n);
	obj1.sort(0,n-1);
	obj1.printArray(n);
	return 0;
}

