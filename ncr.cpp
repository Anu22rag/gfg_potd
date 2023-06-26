//Expected Time Complexity: O(n*r)
//Expected Auxiliary Space: O(r)
int nCr(int n, int r){
        // code here
        long long m=1e9+7;
        if(n<r)return 0;
        if((n-r)<r)r=n-r;
        int dp[r+1];
        
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=min(r,i);j>0;j--){
                dp[j]=(dp[j]+dp[j-1])%m;
            }
        }
        return dp[r];
    }


    //other approach is recurssion and memoization
    //its time complexity is O(n*r) and space complexity is O(n*r) plus stack space
class Solution{
public:
long long m=1e9+7;
vector<vector<int>> dp;
    int solver(int n,int r){
        if(n<r){
            return 0;
        }
        if(n==r || r==0){
            return 1;
        }
        if(dp[n][r]!=-1)return dp[n][r];
        return dp[n][r]=((solver(n-1,r)%m)+(solver(n-1,r-1))%m)%m;
    }
    int nCr(int n, int r){
        // code here
        dp.resize(n+1,vector<int>(r+1,-1));
        return solver(n,r);
       
    }
};

//again we will use tabulation method to reduce stack complexity
//time complexity is O(n*r) and space complexity is O(n*r)
// User function Template for C++

class Solution{
public:
long long m=1e9+7;
vector<vector<int>> dp;
    
    int nCr(int n, int r){
        // code here
        dp.resize(n+1,vector<int>(r+1,-1));
       
       for(int i=0;i<=n;i++){
           for(int j=0;j<=r;j++){
               if(i<j){
                   dp[i][j]=0;
               }
               else if(i==j || j==0){
                   dp[i][j]=1;
               }
               else{
                   dp[i][j]=((dp[i-1][j-1]%m)+(dp[i-1][j]%m))%m;
               }
           }
       }
       return dp[n][r];
    }
};