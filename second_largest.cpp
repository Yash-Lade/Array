#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Insert elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    // BRUTE FORCE APPROACH  -  O(n+nlogn)
  /*  sort(arr,arr+n);
    int sec=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            sec=arr[i];
            break;
        }
    }
    cout<<"The second largest is: "<<sec; */

    // BETTER APPROACH  -   O(2n)
    /*
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }
    int sec=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(sec<arr[i] && arr[i]!=largest)
        sec=arr[i];
    }
    cout<<"The second largest is: "<<sec; */

    // OPTIMAL APPROAOCH    -   O(N)

    int largest=arr[0],slargest=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(largest<arr[i])
        {
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        slargest=arr[i];
    }
    cout<<"The second largest is: "<<slargest;
}