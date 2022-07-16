//FINDING FIRST DUPLICATE ELEMENT;
//LINK: https://leetcode.com/problems/find-the-duplicate-number/
//

#include<bits/stdc++.h>
using namespace std;
int countno(int c,vector<int> &nums){
    int count=0;;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=c){
            count++;

        }
    }
    return count;
    
}

int findDuplicate(vector<int> &nums){
    int low=1,high=nums.size();
    int no=-1;
    while(low<=high){
    int mid=(low+high)/2;
        if(countno(mid,nums)>mid){
            high=mid-1;
            no=mid;
        }
        else{
            low=mid+1;
        }
    }
    return no;
    


}

int main(){
    vector<int> k;
    k={1,3,4,2,2};
    int c=findDuplicate(k);
    cout<<c<<endl;

}