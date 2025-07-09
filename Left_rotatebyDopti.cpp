#include<iostream>
using namespace std;


void reverse(int arr[],int left, int right){

    while (left<right)
    {
        swap(arr[left],arr[right]);
        left++;right--;
    }
    
}
void leftRotate(int arr[], int d, int n){
    d=d%n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

    //Using STD function
  /*reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
  */  
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the vals in array: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int d;
    cout<<"Enter the spaces to shift: ";
    cin>>d;

    leftRotate(arr,d,n);
    
    cout<<"The left rotated array after "<<d<<" places: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}