#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(int arr1[], int arr2[], int n1, int n2){
    vector<int> ans;
    int vis[n2]={0};
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j] && vis[j]==0)
            {
                ans.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr2[j]>arr1[i]) break;
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