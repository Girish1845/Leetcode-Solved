class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] == target) {
                return true;
            }

            // If the left, mid, and right are equal, we cannot determine the sorted half, so we move left pointer one step forward
            if (nums[left] == nums[mid] && nums[right] == nums[mid]) {
                left++;
                right--;
            } 
            // If left half is sorted
            else if (nums[mid] >= nums[left]) {
                // Check if the target is in the sorted half
                if (nums[left] <= target && target <= nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } 
            // If right half is sorted
            else {
                // Check if the target is in the sorted half
                if (nums[mid] <= target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return false;       
    }
};