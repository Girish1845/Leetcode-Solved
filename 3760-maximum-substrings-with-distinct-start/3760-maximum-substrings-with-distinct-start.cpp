class Solution {
public:
    int maxDistinct(string s) {
        int n=s.length();
        int cnt=0;
        unordered_map<char,int>mpp;
        for(char c: s){
            mpp[c]++;
        }
        for(auto a:mpp){
            if(a.second>=1){
                cnt++;
            }
        }
        return cnt;
    }
};