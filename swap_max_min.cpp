#include<iostream>
using namespace std;

void swapno(int a[],int size)
{
	int min=0,max=0;
	for(int i=1;i<size;i++)
	{
		if(a[i]<a[min])
		{
			min=i;
		}
		
		if(a[i]>a[max])
		max=i;
	}
	if(max!=min)
	swap(a[max],a[min]);
}

int main()
{
	int size;
	
	cout<<"Enter the size of the array :";
	cin>>size;
	int a[size];
	
	cout<<"Enter the elements in the array : ";
	for(int i=0;i<size;i++)
	cin>>a[i];
	
	swapno(a,size);
	
	cout<<"The array after swapping the max and min element: ";
	for(int i=0;i<size;i++)
	cout<<a[i]<<" ";
	
}
