class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long int maxFreq=0,l=0,total=0;
        for(int r=0;r<n;r++){
            total+=nums[r];
            if(l+1<=r && (nums[r]*(r-l+1))>total+k){
                total-=nums[l];
                l++;
            }
            maxFreq=max(maxFreq,r-l+1);
        }
    return maxFreq;
    }
};