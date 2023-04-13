class Solution {
public:
    
    int solve(int n, vector<int> &dp){
        
        //base case
        
      if(n<0) return 0;
      if(n==0) return 1;
      
      // recursive case
      // mujhe ek case handle krna hai, baaki recursion dekh lega
        
      if(dp[n]!=-1) return dp[n];
        
      return dp[n]= solve(n-1,dp)+ solve(n-2,dp);
        
    }
    
    int climbStairs(int n) {
        
      vector<int> dp(n+1,-1);
        
      return solve(n,dp);
        
        
    }
};