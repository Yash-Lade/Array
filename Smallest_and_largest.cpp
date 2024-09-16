#include<iostream>
using namespace std;

int main()
{
	int n,largest,smallest;
	
	cout<<"Enter the size of the array :";
	cin>>n;
	
	int arr[n];
	//INT_MAX is +infinity and INT_MIN is -infinity
	
	largest=INT_MAX;
	smallest=INT_MIN;
	
	cout<<"Enter the elemets in array :";
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		if(arr[i]>smallest)
		smallest=arr[i];
		
		else if(arr[i]<largest)
		largest=arr[i];
	}
	cout<<"The Largest no. in array is :"<<smallest<<endl;
	cout<<"The smallest no. in array is :"<<largest;
	
}
