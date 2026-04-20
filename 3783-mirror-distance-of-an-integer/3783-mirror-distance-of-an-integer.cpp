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
        int ans1=abs(n-rev(n));
        return ans1;
    }
};