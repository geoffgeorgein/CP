class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
       // cout<<n<<" "<<m<<'\n';
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        int inf =1e9+7;
        for(int i=0;i<=m;i++){
            dp[n][i]=inf;
        }
        for(int i=0;i<=n;i++){
            dp[i][m]=inf;
        }
        dp[n][m-1]=0;
        dp[n-1][m]=0;
        dp[n-1][m-1]=grid[n-1][m-1];
        
        for(int i=n-1;i>=0;i--){
            
            for(int j=m-1;j>=0;j--){
                
                dp[i][j]=grid[i][j]+min(dp[i+1][j],dp[i][j+1]);
               // cout<<dp[i][j]<<" ";
            }
          //  cout<<'\n';
        }
        return dp[0][0];
        
    }
};