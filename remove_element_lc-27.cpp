#include<iostream>
using namespace std;

// In this question, we have to move the target elements in the end of the array and return the size of the array only till the elements other than target left after shuffling
int removeElement(int arr[], int n, int val){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=val)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    return j;
}

int main(){
    int n,val;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"Enter the element to remove: ";
    cin>>val;
    int ans=removeElement(arr,n,val);

    cout<<"The size after removal is: "<<ans<<endl;
    cout<<"The elements after removal are: ";
    for(int i=0;i<ans;i++) cout<<arr[i]<<" ";

}