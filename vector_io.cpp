#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int ip;
    cout<<"\n --- Input and Output in Vector --- \n";
    cout<<"Enter 5 elements in vector :";
    for(int i=0;i<5;i++)
    {
        cin>>ip;
        vec.push_back(ip);
    }

    cout<<"The created vector is : ";
    for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
}
