#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

// BRUTE Approach
// vector<int> leaders(int arr[], int n){
//     vector<int> leads;
//     for(int i=0;i<n;i++){
//         bool lead=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 lead=0;
//                 break;
//             }
//         }
//         if(lead) leads.push_back(arr[i]);
//     }
//     return leads;
// }


//optimal
vector<int> leaders(int arr[], int n){
    vector<int> leads;
    int maxi=INT_MIN;;

    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            leads.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    return leads;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Insert the elements : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> ans = leaders(arr,n);
    cout<<"The leaders in the array are: ";
    for(auto it: ans)
    cout<<it<<" ";
}