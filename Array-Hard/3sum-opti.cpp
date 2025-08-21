#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr, int n){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue; // continue if i and i+1 are same

        int j=i+1;
        int k=n-1;

        while(j<k){
            int sum= arr[i] + arr[j] + arr[k];

            if(sum<0) j++;
            else if(sum>0) k--; 
            else{
                vector<int> temp = {arr[i], arr[j], arr[k]}; // temprory array  store triplet
                ans.push_back(temp);
                j++; k--;
                // now we have to move j and k till they reach to distinct nums i.e. j!=j-1 and k!=k+1

                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k-1]) k--;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int no; vector<int> arr;
    cout<<"Enter the elements in vetor: ";
    for(int i=0;i<n;i++)
    {
        cin>>no;
        arr.push_back(no);
    }

    vector<vector<int>> ans = threeSum(arr,n);

    cout<<"The unique triplet of sum 0 are: \n";
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++)
        cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}