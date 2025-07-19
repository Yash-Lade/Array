#include<iostream>
using namespace std;

int noOnce(int arr[], int n){
    for(int i=0;i<n;i++){
        int num=arr[i],cnt=0;;
        for(int j=0;j<n;j++){
            if(arr[j]==num)
            cnt++;
        }
        if(cnt==1) return num;
    }
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
