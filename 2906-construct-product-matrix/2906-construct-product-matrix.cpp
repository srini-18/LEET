class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int mod=12345;
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>>ans(n,vector<int>(m));
        long long pref=1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=pref;
                pref=(pref * (grid[i][j] % mod)%mod);
            }
        }
        long long suf=1;

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                ans[i][j]=(1ll * ans[i][j]*suf)%mod;
                suf=(suf*(grid[i][j]%mod)%mod);
            }
        }
        return ans;
    }
};