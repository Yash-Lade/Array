#include<iostream>
#include<limits.h>
using namespace std;


int maxProfit(int prices[], int n){
    int maxpft=0;
    int bestbuy= prices[0];
    for(int i=1;i<n;i++){       // loop started from 1 as we can't sell on day 0 i.e. buying day
        if(prices[i]>bestbuy){
            maxpft=max(maxpft, prices[i]-bestbuy); // prices[i]-bestbuy is today's profit
        }
        bestbuy=min(prices[i],bestbuy);
    }
    return maxpft;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the values: ";
    for(int i=0;i<n;i++) cin>>arr[i];

    int ans= maxProfit(arr, n);
    cout<<"The maximum profit obtained is: "<<ans;
}