class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();
        vector<int>result(n+m,0);
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mul=(num1[i]-'0')*(num2[j]-'0');
                result[i+j]+=mul;
                if(result[i+j]>=10){
                    result[i+j+1]+=result[i+j]/10;
                    result[i+j]%=10;
                }
            }
        }
        while(result.size()>1 && result.back()==0){
            result.pop_back();
        }
        string product;
        for(int i=result.size()-1;i>=0;i--){
            product+=(result[i]+'0');
        }
        return product;
    }
};