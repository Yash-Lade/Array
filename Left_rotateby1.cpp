#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Insert elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    cout<<"The left rotated array by 1 dig is: ";
    for(int k=0;k<n;k++) cout<<arr[k]<<" ";
}