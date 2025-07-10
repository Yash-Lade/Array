#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter vals in array: ";
    for(int i=0;i<n;i++) cin>>arr[i];
    //Brute Force   -   NlogN+n
   /* set<int> st;
    
    for(int i=0;i<n;i++)
    st.insert(arr[i]);

    int index=0;
    for(auto itr: st)
    {
        arr[index]=itr;
        index++;
    }
    cout<<"The unique elements are: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" "; // hence in the beginning (sorted) all the unique elements will appear and other elements will still remain same
    */
    //OPTIMAL APPROACH 
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;    // eg in case - 1 1 2 2 2 3 3 - i will move to 0->1->2 so the size is 3 
        } 
    }
    cout<<"The unique elements are: ";
    for(int k=0;k<=i;k++) cout<<arr[k]<<" ";
}