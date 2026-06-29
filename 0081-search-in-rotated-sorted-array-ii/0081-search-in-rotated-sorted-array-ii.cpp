class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int start=0, end=n-1, mid;
        bool ans = false;

        while(start <= end){
            mid = start + (end - start)/2;

            //if element is found
            if(nums[mid] == target){
                ans = true;
                break;
            }
            // If end points and mid are identical it is impossible to tell which side is sorted
            // So we shrink the boundaries
            if(nums[start] == nums[mid] && nums[mid] == nums[end]){
                start++;
                end--;
            }
            // left sorted
            else if(nums[mid] >= nums[start]){
                if(nums[start] <= target && nums[mid] > target){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            // right sorted
            else{
                if(nums[mid] < target && nums[end] >= target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }
        return ans;
    }
};