class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>groupMap;
        for(int i=0;i<groupSizes.size();i++){
            int size=groupSizes[i];
            groupMap[size].push_back(i);
            if(groupMap[size].size()==size){
                ans.push_back(groupMap[size]);
                groupMap[size].clear();
            }
            
        }
        return ans;
        
    }
};