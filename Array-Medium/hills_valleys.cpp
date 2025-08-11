#include<iostream>
#include<vector>
using namespace std;

int hillsvalleys(int arr[], int n){
    // first we will delete the consecutive duplicates 
    vector<int> nums;
    nums.push_back(arr[0]);
    for(int i = 1; i < n ; i++){
        if(arr[i] != arr[i-1])
        nums.push_back(arr[i]);
    }
    int hill=0, valley=0;
    for(int i=1 ; i<nums.size()-1;i++){
        if( nums[i] > nums[i-1] && nums[i] > nums[i+1] )  hill++;

        else if ( nums[i] < nums[i-1] && nums[i] < nums[i+1] ) valley++;
    }

    return hill+valley;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans = hillsvalleys(arr,n);
    cout<<"Total hills and valleys in array are: "<<ans;

}