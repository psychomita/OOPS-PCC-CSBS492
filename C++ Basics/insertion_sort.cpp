#include <iostream>
using namespace std;

void insertionSort(int arr[],int n) 
{
    int i,j,key;
    for (i=1;i<n;i++) 
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
    insertionSort(arr, n);
    cout<<"Sorted array : ";
    printArray(arr,n);
    cout<<endl;
    return 0;
}
