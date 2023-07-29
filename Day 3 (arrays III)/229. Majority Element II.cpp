class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n =nums.size();
        int num1=-1, num2=-1,c1=0,c2=0,i;
        for(i=0;i<n;i++){
            if(nums[i]==num1)c1++;
            else if(nums[i]==num2)c2++;
            else if(c1==0){
                num1=nums[i];
                c1=1;
            }
            else if(c2==0){
                num2=nums[i];
                c2=1;
            }else{
                c1--;
                c2--;
            }
        }
        vector<int>v;
        c1=c2=0;
        for(i=0;i<n;i++){
            if(nums[i]==num1) c1++;
            else if(nums[i]==num2) c2++;
        }
        if(c1>n/3)  v.push_back(num1);
        if(c2>n/3)  v.push_back(num2);
        return v;
    }
};
