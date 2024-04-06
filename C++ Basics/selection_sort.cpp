#include <iostream>
using namespace std;

void selectionSort(int arr[],int n) 
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++) 
        {
            if(arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

void printArray(int arr[],int size) 
{
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main() 
{
    int i,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Original array : ";
    printArray(arr,n);
    selectionSort(arr, n);
    cout<<"Sorted array : ";
    printArray(arr,n);
    cout<<endl;
    return 0;
}
