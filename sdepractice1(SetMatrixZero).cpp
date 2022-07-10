#include<bits/stdc++.h>
using namespace std;
void setMatrixZero(vector < vector <int> > &matrix){
    int  rows=matrix.size(), cols=matrix[0].size();
    int firstcol=1;
    cout<<"CP=1"<<endl;
    for(int i=0;i<rows;i++){
        if(matrix[i][0]==0){
            firstcol=0;
        }
        for(int j=1;j<cols;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }

        }
    }
    cout<<"cp=2"<<endl;

    for(int i=rows-1;i>=0;i--){
        for(int j=cols-1;j>=1;j--){
            if(matrix[i][0]==0||matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
        if(firstcol==0){
            matrix[i][0]=0;
        }
    }
    cout<<"CP=3"<<endl;

}

int main(){
    vector<vector <int>> matrix;
    matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    cout<<"before func:- "<<endl;

    setMatrixZero(matrix);

    cout<<"After Modification:- "<<endl;

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    

}
