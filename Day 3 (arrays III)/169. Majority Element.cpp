class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++) 
            m[nums[i]]++;
        int ans=INT_MIN;
        int rAns;
        for(auto i : m){
            if(i.second>ans){
                ans =  i.second;
                rAns = i.first;
            }
        }
        return rAns;
    }
};
