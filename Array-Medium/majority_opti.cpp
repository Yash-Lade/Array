#include<iostream>
using namespace std;

// In this quetion, the majority element would be the one appearing moare than n/2 times in an array 
int majority(int arr[], int n){
    // Using Moore's Voting Algorithm
    int cnt=0;
    int el;

    // in this we sirt set an element and if arr[i]==element then increase the count and if arr[i]!=element then decrease the count
    // if count again be zero then store the element and again repeat , at last we will have some count and a value in element
    for(int i=0;i<n;i++){
        if(cnt==0)
        {
            cnt=1;
            el=arr[i];
        }
        else if(arr[i]==el) cnt++;
        else cnt--;
    }

    // now to chech if that element value is maximum, count it's occurence and if it appears more than n/2 then yes its the one
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el) cnt2++;
    }
    if(cnt2>(n/2)) return el;
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