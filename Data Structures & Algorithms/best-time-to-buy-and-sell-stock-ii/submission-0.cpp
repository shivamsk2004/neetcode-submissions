class Solution {
    private:
    int solve(int id,int buy,vector<int>&prices,vector<vector<int>>&dp){
        int n=prices.size();
        if(id>=n)return 0;
        if(dp[id][buy]!=-1)return dp[id][buy];
        if(buy){
            return dp[id][buy]=max(solve(id+1,1,prices,dp),-prices[id]+solve(id+1,0,prices,dp));
        }
        else{
            return dp[id][buy]=max(solve(id+1,0,prices,dp),prices[id]+solve(id+1,1,prices,dp));
        }
        return -1;
    }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return solve(0,1,prices,dp);
    }
};