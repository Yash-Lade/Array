#include<bits/stdc++.h>
using namespace std;

int longestSeq(int arr[], int n){
    sort(arr,arr+n);
    int lastsmaller=INT_MIN;
    int ctrcurr=0;
    int longest=1;
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastsmaller){
            lastsmaller=arr[i];
            ctrcurr++;
        }
        else if(arr[i]!=lastsmaller ){
            ctrcurr=1;
            lastsmaller=arr[i];
        }
        longest=max(longest,ctrcurr);
    }
    return longest;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Insert the elements : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"The longest consecutive sequence is: "<<longestSeq(arr,n);
}