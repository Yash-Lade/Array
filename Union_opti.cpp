#include<bits/stdc++.h>
using namespace std;

vector<int> Union(int arr1[], int arr2[], int n1, int n2){
    int i=0,j=0;
    vector<int> unionArray;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArray.size()==0 || unionArray.back()!=arr1[i] )
            unionArray.push_back(arr1[i]);

            i++;
        }

        else{
            if(unionArray.size()==0 || unionArray.back()!=arr2[j] )
            unionArray.push_back(arr2[j]);
            j++;
        }
    }
    while (i<n1)
    {
        if(unionArray.size()==0 || unionArray.back()!=arr1[i])
            unionArray.push_back(arr1[i]);

            i++;
    }
    while (j<n2)
    {
       if(unionArray.size()==0 || unionArray.back()!=arr2[j] )
            unionArray.push_back(arr2[j]);
            j++;
    }
    
    return unionArray;
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

    cout<<"The union of arrays is: ";
    vector<int> soln = Union(arr1,arr2, n1, n2);
    for(int itr: soln) cout<<itr<<" ";

}