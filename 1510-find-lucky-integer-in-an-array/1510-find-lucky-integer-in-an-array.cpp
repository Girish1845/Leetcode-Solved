class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>ams;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int lucky=-1;
        for(auto& [key,value]:mp){
            if(key==value){
                lucky=max(lucky,key);
            }
        }
        return lucky;
    }
};