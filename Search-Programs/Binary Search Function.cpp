#include<iostream>
using namespace std;







void sort(int [] , int ); // Prototype 
void binarysearch(int [] , int, int); // Prototype


int main()
{
    const int size = 5;
	int array[size]={20,12,10,9,45};
	sort(array,size);
	for(int i=0;i<size;i++)
	{
		cout<<"\t"<<array[i]<<"\t";
	} 
	int target;
	cout<<"\nEnter the Number You Want to Search: ";
	cin>>target;
	binarysearch(array,size,target);
	
	return 0;
}

// First Function of Sorting.
void sort(int arr[], int size)
{
	for(int i=0;i<size-1;i++)
	{
	for(int j=0;j<size-i-1;j++)
	{
	if(arr[j] > arr[j+1])
	{
		swap(arr[j],arr[j+1]);
	}
	}	
}
}

// Second Function of Binary Search.

void binarysearch(int arr[] , int size, int target)
{
	for(int low=0, high=size-1;low<=high;)
	{
		int mid= (low + high) / 2;
	if(arr[mid]== target)
	{
		cout<<"Element Found at the Index: "<<mid<<endl;
		return;
	}
	if( arr[mid] < target)
	{
		low = mid + 1;
	} else 
	{
		high = mid + 1;
	}
	}
	cout<<"Sorry, Element Not Found!"<<endl;
}
