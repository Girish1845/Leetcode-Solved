class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.length();
        int m=part.length();
        for(int i=0;i<n;i++){
            if(s.find(part)<n){
                s.erase(s.find(part),m);
            }
        }
        return s;
    }
};