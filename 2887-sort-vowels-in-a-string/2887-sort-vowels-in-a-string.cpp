class Solution {
public:
    string sortVowels(string s) {
        int n=s.length();
        // string st=tolower(s);
        string str="";
        for(int i=0;i<n;i++){
             char st = tolower(s[i]);
            if(st=='a'|| st=='e'|| st=='i'|| st=='o'|| st=='u'){
                str+=s[i];

            }
        }
            sort(str.begin(),str.end());
            int cnt=0;
            for(int i=0;i<n;i++){
                char st = tolower(s[i]);

            if(st=='a'|| st=='e'|| st=='i'|| st=='o'|| st=='u'){
                s[i]=str[cnt];
                cnt++;

            }
            }
            
            return s;
    }
};