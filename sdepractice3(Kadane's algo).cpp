//Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum 
// and return its sum.
#include<bits/stdc++.h>
using namespace std;

void kadene(vector<int> &nums, vector<int> &subarray){
    int max_till=nums[0],max_curr=0;
    int s=0;
    for(int i=0;i<nums.size();i++){
      max_curr+=nums[i];
      if(max_curr>max_till){
        max_till=max_curr;
        subarray.clear();
        subarray.push_back(s);
        subarray.push_back(i);

      }
      if(max_curr<0){
        max_curr=0;
        s=i+1;
      }
    }
    cout<<max_till<<endl;

}
int main(){
 vector<int> nums;
 vector<int> subarray;
 nums={-2,1,-3,4,-1,2,1,-5,4};
 kadene(nums,subarray);
 cout<<"Subarray is: ";
 for(int i=subarray[0];i<=subarray[1];i++ ){
  cout<<nums[i]<<" ";
 }
 
}