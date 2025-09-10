#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int left=n-1;
    int right= 0;

    while(left>=0 && right<m){
        if(nums2[right]<nums1[left]){
            swap(nums2[right], nums1[left]);
            left--; right++;
        }
        else break; // if this is condition then all smallers are on left array and bigger on right so that's why we will break loop
    }
    // after that just sort both arrays
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
}

int main(){
    int m,n;
    vector<int> nums1, nums2;
    int no;

    cout<<"Enter the size of 1st array: ";
    cin>>m;
    
    cout<<"Enter the elements: ";
    for(int i=0;i<m;i++)
    {
        cin>>no;
        nums1.push_back(no);
    }

    cout<<"Enter the size of 2nd array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>no;
        nums2.push_back(no);
    }

    merge(nums1, m, nums2, n);
}