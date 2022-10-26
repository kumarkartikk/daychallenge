class Solution {
public:
    
    int func(int i,vector<int>&nums,int n,vector<int>&dp)
    {
        if(i==(n-1) ) return 1;  //base case

        if(dp[i]!=-1) return dp[i];

        for(int indx=i+1;indx<=i+nums[i] && indx<n;indx++)
        {
            if(func(indx,nums,n,dp))
            return dp[i]=1;
        }

        return dp[i]=0;
    }
    bool canJump(vector<int>& nums) {

        int n=nums.size();
        vector<int>dp(n,-1);
        return func(0,nums,n,dp);
        
    }
};
