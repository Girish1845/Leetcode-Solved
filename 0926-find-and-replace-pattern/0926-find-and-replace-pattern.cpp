class Solution {
public:
    bool match(string word, string pattern) {
        if (word.size() != pattern.size()) return false;

        unordered_map<char, char> p2w; 
        unordered_map<char, char> w2p; 

        for (int i = 0; i < word.size(); i++) {
            char p = pattern[i];
            char w = word[i];

            
            if (p2w.count(p) && p2w[p] != w) return false;
            if (w2p.count(w) && w2p[w] != p) return false;

            
            p2w[p] = w;
            w2p[w] = p;
        }
        return true;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for (string &word : words) {
            if (match(word, pattern)) ans.push_back(word);
        }
        return ans;
    }
};
