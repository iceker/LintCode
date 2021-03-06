class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
     
 	//动态规划 
    int climbStairs(int n) {
        // write your code here
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2; i<=n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
    
	//递归  会超时 
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        return climbStairs(n-1) + climbStairs(n-2);
    }
};

 
