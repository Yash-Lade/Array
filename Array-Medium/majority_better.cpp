#include<iostream>
#include<map>
using namespace std;

// In this quetion, the majority element would be the one appearing moare than n/2 times in an array 
int majority(int arr[], int n){
    
    //we will use hashmap to store - <element,freq>
    map<int, int> mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto itr: mpp){
        if(itr.second>(n/2))
        return itr.first;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans= majority(arr,n);
    if(!ans) cout<<"There isn't any Majority Element !!";
    else cout<<"The majority element is :"<<ans;
}