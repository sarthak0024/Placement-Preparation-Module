53. Maximum Subarray
Medium

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int sum=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
           sum=max(nums[i],sum+nums[i]);
            if(ans<sum)
                ans=sum;
        }
        return ans;
    }
};
