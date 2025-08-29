class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp1;
        unordered_map<int,int>mpp2;
        for(int i=0;i<nums1.size();i++){
            mpp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mpp2[nums2[i]]++;
        }
        int sum1=0;
        for(auto it:mpp1){
            if(mpp2.find(it.first)!=mpp2.end()){
                sum1+=it.second;
            }
        }
        int sum2=0;
        for(auto it:mpp2){
            if(mpp1.find(it.first)!=mpp1.end()){
                sum2+=it.second;
            }
        }
        return {sum1,sum2};

    }
};