class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target){
        int n = nums.size();
        int start=0, end=n-1, mid;
        int first = -1;
        int last = -1;

        // First Occurrance
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid] == target){
                if(mid == 0 || nums[mid-1] != target){
                    first = mid;
                    break;
                }
                else{
                    end = mid-1;
                }
            }
            if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        // Last Occurance
        int Start=0, End=n-1,Mid;
        while(Start <= End){
            Mid = Start + (End - Start)/2;
            if(nums[Mid] == target){
                if(Mid == n-1 || nums[Mid+1] != target){
                    last = Mid;
                    break;
                }
                else{
                    Start = Mid+1;
                }
            }
            else if(nums[Mid] < target){
                Start = Mid + 1;
            }
            else{
                End = Mid - 1;
            }
        }
        return {first,last};
        
 
    }
};