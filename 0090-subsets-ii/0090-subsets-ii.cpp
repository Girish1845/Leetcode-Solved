class Solution {
public:

    void backtrack(vector<int> &nums,int ind,vector<int> &path, vector<vector<int>> &result){
        result.push_back(path);
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1])
            continue;
            path.push_back(nums[i]);
            backtrack(nums,i+1,path,result);
            path.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>path;
        backtrack(nums,0,path,result);
        return result;
    }
};