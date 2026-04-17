class Solution {
public:
    int rev(int num){
        int val=0;
        while(num>0){
          int r=num%10;
          val=val*10+r;
          num=num/10;
        
        }
        return val;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.count(nums[i])){
                ans=min(ans,i-mp[nums[i]]);
            }
            mp[rev(nums[i])]=i;
        }
        return ans==INT_MAX ? -1 : ans;
    }
};