class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[s]=nums[i];
                s++;
                
            }
            
            
        }
        while(s<nums.size()){
                nums[s]=0;
                s++;
            }

    }
};