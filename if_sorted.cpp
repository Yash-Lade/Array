#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Insert elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    bool sorted=true;

    for(int i=0;i<n;i++){
        if(arr[i]<=arr[i+1])
        sorted=true;
        else
        sorted=false;
    }

    if(!sorted) cout<<"Array is not sorted !!";
    else cout<<"Sorted ";
}