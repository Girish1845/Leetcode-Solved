class Solution {
public:
    int maxFreqSum(string s) {
        int n=s.length();
        unordered_map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        int vowels=0;
        int conso=0;
        for(auto &p:freq){
            char c=p.first;
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vowels=max(vowels,p.second);
            }
            else{
                conso=max(conso,p.second);
            }
        }
        return vowels+conso;

    }
};