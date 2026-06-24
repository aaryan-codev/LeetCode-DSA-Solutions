class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        
        int sum = 0;
        int twodigit = 0;

        for(int i=0; i<n; i++){

            if(nums[i]<10){
                sum += nums[i];
            }
            else{
                twodigit += nums[i];
            }
        }

        if(sum == twodigit){
            return false;
        }
        return true;
    }
};