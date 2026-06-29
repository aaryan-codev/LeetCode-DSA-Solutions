class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start=0, end = n-1, mid;

        if(nums[0] > nums[n-1]){
            while(start <= end){
                mid = start + (end-start)/2;
                
                if(mid > 0 &&nums[mid] < nums[mid-1]){
                    return nums[mid];
                }
                else if(nums[mid] < nums[n-1]){
                    end = mid-1;
                }
                else{
                    start = mid + 1;
                }
            }
            
        }
        else{
            return nums[0];
        }
    return -1;    
    }
};