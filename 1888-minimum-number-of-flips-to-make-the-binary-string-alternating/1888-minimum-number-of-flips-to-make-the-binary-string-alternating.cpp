class Solution {
public:
    int minFlips(string s) {
        int n=s.size();

        s+=s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]-'0' !=i%2){
                cnt++;
            }
        }
        int ans=min(cnt,n-cnt);
        for(int i=0;i<n;i++){
            if(s[i]-'0' !=i%2){
                cnt--;
            }
            if(s[i+n]-'0' !=(i+n)%2){
                cnt++;
            }
            ans=min(ans,min(cnt,n-cnt));
        }
        return ans;
    }
};