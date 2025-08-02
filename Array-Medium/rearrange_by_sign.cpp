#include<iostream>
#include<vector>
using namespace std;

void rearrange(int arr[], int n){
    vector<int> pos,neg;

    for(int i=0;i<n;i++){
        if(arr[i]>0)
        pos.push_back(arr[i]);

        else 
        neg.push_back(arr[i]);
    }

    for(int i=0;i<n/2;i++){
        arr[i*2]=pos[i];
        arr[i*2+1]=neg[i];
    }
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    rearrange(arr,n);
    cout<<"The re-arranged array is: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}