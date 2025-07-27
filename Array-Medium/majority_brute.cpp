#include<iostream>
using namespace std;

// In this quetion, the majority element would be the one appearing moare than n/2 times in an array 
int majority(int arr[], int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            cnt++;
        }
        if(cnt>(n/2)) return arr[i];
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