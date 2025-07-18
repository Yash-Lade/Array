#include<iostream>
using namespace std;

int maxOnes(int arr[], int n){
    int maxi=0,count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else count=0;
    }
    return maxi;
}


int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"The maximum consecutive ones are: "<<maxOnes(arr,n);;
    
}