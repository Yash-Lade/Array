#include<iostream>
using namespace std;

void Revarray(int arr[],int size)
{
	int i,j;
	i=0;j=size-1;
	
	while(i<j)
	{
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
}

int main()
{
	int size;
	
	cout<<"Enter the size of the array : ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements in the array :";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	Revarray(arr,size);
	
	cout<<"The array after reversing is :";
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
}
