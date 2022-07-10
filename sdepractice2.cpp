//Pascal's triangle
#include<bits/stdc++.h>
using namespace std;

vector<vector <int> > generate1(int numRows){
    vector<vector <int> > r(numRows);
    for(int i=0;i<numRows;i++){
        r[i].resize(i+1);
        r[i][0]=r[i][i]=1;

        for(int j=1;j<i;j++){
             r[i][j]=r[i-1][j-1]+r[i-1][j];
        }
    }
    return r;



}
int main(){
    int numrows=5;
    vector<vector <int>> myvec;
    myvec= generate1(numrows);

    for(int i=0;i<myvec.size();i++){
        for(int j=0;j<=i;j++){
            cout<<myvec[i][j];
        }
        cout<<endl;
    }
}