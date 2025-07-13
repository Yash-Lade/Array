#include<bits/stdc++.h>
using namespace std;

vector<int> Union(int arr1[], int arr2[], int n1, int n2){
    set<int> st;

    for(int i=0;i<n1;i++)
    st.insert(arr1[i]);

    for(int i=0;i<n2;i++)
    st.insert(arr2[i]);

    vector<int> soln(st.begin(),st.end()); // we can insert either using this 
    // vector<int> soln;
    // for(auto it: st) soln.push_back(it);     or this !!
    return soln;
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