// merge sorted array
// link: https://leetcode.com/problems/merge-sorted-array/
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int ins_idx = m+n;
        while(ins_idx--)
           { if(m == 0){

                nums1[ins_idx] = nums2[--n];
           }
            else if(n == 0){

                nums1[ins_idx] = nums1[--m];
            }
            else if(nums1[m - 1] <= nums2[n - 1]){

                nums1[ins_idx] = nums2[--n];
            }
            else{
                nums1[ins_idx] = nums1[--m];}
           }
        for(int i=0;i<m+n;i++){
            cout<<nums1[i]<<" ";
        }
    }
int main(){
    int n=3,m=3;
    vector<int> num1;
    vector<int> num2;
    num1={1,2,3,0,0,0};
    num2={2,5,6};
    merge(num1,3,num2,3);
}