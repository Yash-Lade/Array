#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(int arr1[], int arr2[], int n1, int n2){
    vector<int> ans;
    
    int i=0,j=0;
    while (i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j]) i++;
        else if(arr2[j]<arr1[i]) j++;
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    return ans;
}

int main(){
    int n1,n2;
    cout<<"Enter the size of array first array : ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the vals in array first array: : ";
    for(int i=0;i<n1;i++) cin>>arr1[i];

    cout<<"Enter the size of array second array : ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the vals in array second array: : ";
    for(int i=0;i<n2;i++) cin>>arr2[i];

    vector<int> ans = intersection(arr1,arr2,n1,n2);
    for(auto itr: ans) cout<<itr<<" ";
}