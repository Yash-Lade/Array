#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the vals in array: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int d;
    cout<<"Enter the spaces to shift: ";
    cin>>d;

    d=d%n; // as ultimately after double val of d the pattern will repear
    //Brute Force
    int temp[d];    // temprory array to copy starting vals
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    //shifting loop to shift the remaning vales by D places
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    //loop to insert the starting values from temprory array to main array(in the end)
    int j=0;
    // for(int i=n-d;i<n;i++){
    //     arr[i]=temp[j];
    //     j++;
    // }

    // for better approach
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(i-d)]; //so i-(i-d) = 3-3=0, then 4-3=1 and so on, finally temp[0], temp[1]... pattern forms
    }
    cout<<"The left rotated array after "<<d<<" places: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}   