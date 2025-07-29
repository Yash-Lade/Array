#include<iostream>
#include<limits.h>
using namespace std;

int sumBrute(int arr[], int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            maxi=max(sum,maxi);
        }
    }

    return maxi;
}

int sumBetter(int arr[], int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter values in array: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans= sumBetter(arr,n);
    cout<<"The maximum subarray sum is: "<<ans;
}