#include<iostream>
using namespace std;

bool check(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n])
        count++;
    }

    return count <=1; // will return true if count is less than or equal to one.
}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];
    cout<<"Enter the values in the array :";
    for(int i=0;i<n;i++) cin>>arr[i];

    bool ans=check(arr,n);
    if(ans) cout<<"The array is rotated and sorted";
    else cout<<"The array is not sorted";
}