class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        string word;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }
        if(words.size()!=pattern.length()){
            return false;
        }
        unordered_map<char,string>mpp;
        unordered_map<string,char>rev;

        for(int i=0;i<pattern.length();i++){
            char c=pattern[i];
            string w=words[i];
            if(mpp.count(c) && mpp[c]!=w)
            return false;
            if(rev.count(w) && rev[w]!=c)
            return false;

            mpp[c]=w;
            rev[w]=c;

        }
        return true;
    }
};