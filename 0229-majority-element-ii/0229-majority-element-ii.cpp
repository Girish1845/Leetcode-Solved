class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size();
        vector<int> ans;
        unordered_map<int, int> map;
        for (int i=0;i<n;i++) {
            map[nums[i]]++;
        }

      vector<pair<int, int>> freqVec(map.begin(), map.end());
      for(int i=0;i<freqVec.size();i++){
        if (freqVec[i].second > (n / 3)) {
                ans.push_back(freqVec[i].first); 
            }
      }
      return ans;
    }
};