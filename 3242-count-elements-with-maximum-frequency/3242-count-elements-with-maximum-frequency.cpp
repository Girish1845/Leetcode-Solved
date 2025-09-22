class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int maxi=0;
        int count=0;

        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        
        for(auto it:mpp){
            int p=it.second;
            maxi=max(maxi,p);

        }
        for(auto it:mpp){
            if(it.second==maxi){
                count++;
            }
        }
        return count*maxi;
    }
};