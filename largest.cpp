#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Insert elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    // BRUTE FORCE
    sort(arr,arr+n);
    cout<<"The largest elemnet is array is: "<<arr[n-1];

    // OPTIMAL APPROACH
   /* int largest = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
    }
    cout<<"The largest elemnet is array is: "<<largest;*/
}