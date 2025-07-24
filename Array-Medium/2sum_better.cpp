#include<iostream>
#include<vector>
#include<map>
#include <unordered_map>
using namespace std;

vector<int> twoSumidx(int arr[], int n, int target){
    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int moreNeeded= target-num;

        if(mpp.find(moreNeeded)!=mpp.end())
        return {mpp[moreNeeded], i};

        mpp[num]=i;
    }

    return {-1,-1};
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int target;
    cout<<"Enter the target: ";
    cin>>target;

    vector<int>ans= twoSumidx(arr,n, target);
    cout<<"The indices of target are: ";
    for(auto itr: ans) cout<<itr<<" ";

}