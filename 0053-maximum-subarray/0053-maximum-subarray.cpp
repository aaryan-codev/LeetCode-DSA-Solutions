class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int maximum = INT_MIN;
        int prefix = 0;

        for(int i=0; i<n; i++){
            prefix += nums[i];
            maximum = max(prefix,maximum);

            if(prefix < 0){
                prefix = 0;
            }
        }
        return maximum;
    }
};