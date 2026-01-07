class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum=0,maxSum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            curSum+=nums[i];
            maxSum=max(maxSum,curSum);
            if(curSum<0){
                curSum=0;
            }
        }
        return maxSum;
    }
};