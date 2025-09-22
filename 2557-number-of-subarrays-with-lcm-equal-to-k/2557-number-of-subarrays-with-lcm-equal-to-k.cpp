class Solution {
public:
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    // int prod=a*b;
    return (a/gcd(a,b))*b;
}
    int subarrayLCM(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int lcmm=nums[i];
            for(int j=i;j<nums.size();j++){
                lcmm=lcm(lcmm,nums[j]);
                if(lcmm==k){
                    cnt++;
                }
                if (lcmm > k) break;
            }
        }
        return cnt;
    }
};