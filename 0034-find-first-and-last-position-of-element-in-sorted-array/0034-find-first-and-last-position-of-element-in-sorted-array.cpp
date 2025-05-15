class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOcc(nums,target);
        if(first==-1)
        {
            return {-1,-1};
        }
        int last=lastOcc(nums,target);
        return {first,last};
    }
    int firstOcc(vector<int>& nums,int target){
        int low=0,high=nums.size()-1;
        int left=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
            left=mid;
            high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
            return left;
        
    }
    int lastOcc(vector<int>& nums,int target){
        int low=0,high=nums.size()-1;
        int right=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
            right=mid;
            low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
            return right;
        
    }


        
    
};