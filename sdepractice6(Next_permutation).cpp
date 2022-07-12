//Find next permutation:- 
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums){
   int break_point=0,l,n=nums.size();
        for(break_point=n-2;break_point>=0;break_point--) {

         if(nums[break_point]<nums[break_point+1]){
            break;
         }
      }
         if(break_point<0){
            reverse(nums.begin(),nums.end());
         }else{
         for(l=n-1;l>break_point;l--){
               if(nums[l]>nums[break_point]){
                  break;
               }
         }
         swap(nums[l],nums[break_point]);
         reverse(nums.begin()+break_point+1,nums.end());

      }
         for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
         }
}


int main(){
   vector<int> nums;
   nums={3,2,1};
   nextPermutation(nums);
}