#include<bits/stdc++.h>

using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter the rows of matrix: ";
    cin>>rows;

    cout<<"Enter the columns of matrix: ";
    cin>>cols;

    vector<vector<int>> mat(rows, vector<int>(cols));

    cout<<"Enter the elemnts in matrix : \n";
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin>>mat[i][j];

    cout<<"The matrix is : \n";
    for(int i=0;i<rows;i++)
    {   for(int j=0;j<cols;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
        
}