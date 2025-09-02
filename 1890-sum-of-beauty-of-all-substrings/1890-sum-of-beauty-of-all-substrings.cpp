class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            map<char, int> freq;
            for (int j = i; j < n; j++) {
                freq[s[j]]++;
                int mini = INT_MAX;
                int maxi = 0;
                for (auto it : freq) {
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }
                ans += maxi - mini;
            }
        }
        return ans;
    }
};