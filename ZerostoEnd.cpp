#include<bits/stdc++.h>
using namespace std;

//BRUTE APPROACH
void move(int arr[], int n){
    vector<int> vec;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
        vec.push_back(arr[i]);
    }
    int count=vec.size();

    for(int i=0;i<count;i++)
    arr[i]=vec[i];

    for(int i=count;i<n;i++)
    arr[i]=0;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    // move(arr,n); BRUTE APPROACH

    //OPTIMAL APPROACH
    int j=0;
    for(int i=0;i<n;i++) {

        if(arr[i]!=0 & arr[j]==0){
            swap(arr[i],arr[j]);
            j++;
        }
        
        else if(arr[j]!=0) j++;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}