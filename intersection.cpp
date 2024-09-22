#include<iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2)
{
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			if(arr1[i]==arr2[j])
			cout<<arr2[j]<<" ";
		}
	}
}
int main(){
	int size1,size2;

	cout<<"Enter the size of the first array :";
	cin>>size1;

	int arr1[size1];
	cout<<"Enter the elements in first array :";
	for(int i=0;i<size1;i++)
	cin>>arr1[i];
	
	cout<<"Enter the size of the second array :";
	cin>>size2;

	int arr2[size2];
	cout<<"Enter the elements in second array :";
	for(int i=0;i<size2;i++)
	cin>>arr2[i];

	cout<<"The intersection of arrays are/is : ";
	intersection(arr1,size1,arr2,size2);
}
