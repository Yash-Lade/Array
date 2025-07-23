#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSumidx(int arr[], int n, int target){
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;

            if(arr[i]+arr[j]==target){
                temp.push_back(i); temp.push_back(j);
                return temp;
            }
            
        }
    }

    return temp;
}

bool twosum(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;

            if(arr[i]+arr[j]==target)
            return true;
        }
    }

    return false;
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

    // bool anss= twosum(arr,n,target);
    // if(anss) cout<<" Yes the target sum found in array :) ";
    // else cout<<"No, couldn't find the target sum !!";

    vector<int>ans= twoSumidx(arr,n, target);
    cout<<"The indices of target are: ";
    for(auto itr: ans) cout<<itr<<" ";


}