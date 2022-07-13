#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums){
    int l=0,m=0,h=nums.size()-1;
    while(m<=h){
        if(nums[m]==0){
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else if(nums[m]==1){
            m++;
        }
        else if(nums[m]==2){
            swap(nums[h],nums[m]);
            h--;

        }
    }
    

}

int main(){
    vector<int> nums;
    nums={2,0,2,1,1,0};
    sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}