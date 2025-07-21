#include<iostream>
using namespace std;

int noOnce(int arr[], int n){
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
    }

    return xorr;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<"The number appears only once is: "<<noOnce(arr,n);

}