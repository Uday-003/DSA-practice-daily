//Rotate matrix problem:-
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix){
   int tmp,n,c;
   for(int i=0;i<matrix.size();i++){
      for(int j=i+1;j<matrix[0].size();j++){
         tmp=matrix[i][j];
         matrix[i][j]=matrix[j][i];
         matrix[j][i]=tmp;
      }
   }
   n=(matrix.size())/2;
   for(int i=0;i<matrix.size();i++){
      c=matrix[0].size()-1;
      for(int j=0;j<n;j++){
        tmp = matrix[i][j];
        matrix[i][j]=matrix[i][c];
        matrix[i][c]=tmp;
        c--;

      }
   }

}
int main(){
   vector<vector<int>> matrix;
   matrix={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
   rotate(matrix);
}