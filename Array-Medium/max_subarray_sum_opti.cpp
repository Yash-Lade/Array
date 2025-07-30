#include<iostream>
#include<limits.h>
using namespace std;


// Kadane's Algorithm
// int maxSum(int arr[], int n){
//     int sum=0;
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];

//         if(sum>maxi) maxi=sum;
//         if(sum<0) sum=0;
//     }
//     return maxi;
// }


//for priting the max sum subarray
int maxSum(int arr[], int n){
    int sum=0;
    int maxi=INT_MIN;
    int start=0;
    int ansStart=-1,ansEnd=-1;
    for(int i=0;i<n;i++){ 

        if(sum==0) start=i;
        sum=sum+arr[i];

        if(sum>maxi) {
            maxi=sum;

            ansStart=start,ansEnd=i;
        }
        if(sum<0) sum=0;
    }
    cout<<"The maximum subarray is: ";
    for(int i=ansStart;i<=ansEnd;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter values in array: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans= maxSum(arr,n);
    cout<<"The maximum subarray sum is: "<<ans;
}