class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int total =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)total*=1;
            if(nums[i]<0)total*=-1;
            if(nums[i]==0)total*=0;
        }
        if(total>0)return 1;
        if(total<0)return -1;
        return 0;
    }
};