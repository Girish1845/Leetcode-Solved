class Solution {
public:
    int rev(int m){
        int ans=0;
        while(m>0){
            int r=m%10;
            ans=ans*10+r;
            m/=10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        string s=to_string(n);
        reverse(s.begin(),s.end());
        int ans1=stoi(s);
        return abs(n-ans1);
    }
};