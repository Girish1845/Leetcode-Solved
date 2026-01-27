class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=i+k-1;
        int diff=0;
        int mini=INT_MAX;
        while(j<n){
            diff=nums[j]-nums[i];
            mini=min(diff,mini);
            i++;
            j++;
        }
        return mini;
    }
};