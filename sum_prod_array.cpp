#include<iostream>
using namespace std;

void arraysumprod(int a[],int size,int &init_sum,int &init_prod)
{
	for(int i=0;i<size;i++)
	{
		init_sum=init_sum+a[i];
		init_prod=init_prod*a[i];
	}
}

int main()
{
	int size,init_sum=0,init_prod=1;
	cout<<"Enter the size of the array :";
	cin>>size;
	int a[size];
	
	cout<<"Enter the elements in the array :";
	for(int i=0;i<size;i++)
	cin>>a[i];
	
	arraysumprod(a,size,init_sum,init_prod);
	
	cout<<"The sum of all elements of array are :"<<init_sum<<endl;
	cout<<"The product of all elements of array are :"<<init_prod;
}
