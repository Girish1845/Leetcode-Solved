class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int m=dimensions.size();
        int maxarea=0;
        int maxdiaglen=0;
        //int n=dimensions[0].size();
        for(int i=0;i<m;i++){
            int l=dimensions[i][0];
            int w=dimensions[i][1];
            int diagsq=l*l+w*w;
            int area=l*w;
        if(diagsq>maxdiaglen || ((diagsq==maxdiaglen)&&(area>maxarea)) ){
            maxdiaglen=diagsq;
            maxarea=area;
        }
        }
        return maxarea;
    }
};