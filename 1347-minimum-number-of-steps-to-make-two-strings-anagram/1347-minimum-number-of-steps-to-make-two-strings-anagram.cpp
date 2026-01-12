class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.length();
        unordered_map<char,int>mpp1(n);
        unordered_map<char,int>mpp2(n);
        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        int count=0;
        for(auto it:mpp1){
            char c=it.first;
            int m1=it.second;
            int m2=mpp2[c];
            if(m1>m2){
                count+=(m1-m2);
            }
        }
        return count;
    }
};