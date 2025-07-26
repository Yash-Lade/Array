#include<iostream>
#include<vector>
using namespace std;

void sortColors(int arr[], int n){
    int cnt0=0,cnt1=0,cnt2=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0) cnt0++;
        else if(arr[i]==1) cnt1++;
        else cnt2++;
    }

    for(int i=0;i<cnt0;i++)
    arr[i]=0;

    for(int i=cnt0;i<cnt0+cnt1;i++)
    arr[i]=1;

    for(int i=cnt0+cnt1;i<n;i++)
    arr[i]=2;
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
