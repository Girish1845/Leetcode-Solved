class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            int digit=s[i]-'0';
            product=product*digit;
            sum=sum+digit;
        }
        return product-sum;
    }
};