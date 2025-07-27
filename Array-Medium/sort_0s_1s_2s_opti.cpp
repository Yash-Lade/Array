#include<iostream>
#include<vector>
using namespace std;


//using Dutch National Flag Algorithm
void sortColors(int arr[], int n){
    
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;low++;
        }
        else if(arr[mid]==1)
        mid++;

        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    sortColors(arr,n);
    cout<<"After sorting array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}