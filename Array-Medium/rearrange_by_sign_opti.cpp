#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrange(int arr[], int n){
    vector<int> ans(n,0);
    int posidx=0,negidx=1;

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[posidx]=arr[i];
            posidx+=2;
        }
        else 
        {
            ans[negidx]=arr[i];
            negidx+=2;
        }
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> ans =rearrange(arr,n);
    cout<<"The re-arranged array is: ";
    for(auto itr: ans){
        cout<<itr<<" ";
    }
}