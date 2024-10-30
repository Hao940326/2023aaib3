class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(auto i:accounts){
            int sum=0;
            for(auto b:i){
                sum+=b;
            }
            if(sum>ans)ans=sum;
        }
        return ans;
    }
};