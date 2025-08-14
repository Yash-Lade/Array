#include<iostream>
#include <climits>
using namespace std;

int longestSeq(int arr[], int n){
    
    int longest=INT_MIN;
    for(int i=0;i<n;i++){
        int x;
        x=arr[i];
        int ctr=1;  // initially we have one element
        for(int j=0;j<n;j++){
            if(arr[j]==x+1){
                ctr++;
                x++;
                j=-1; // restarting the loop if next number found !
            }
        }
        longest=max(longest,ctr);
    }
    return longest;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Insert the elements : ";
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"The longest consecutive sequence is: "<<longestSeq(arr,n);
}