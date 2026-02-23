class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.length();
        if(n<k){
            return false;
        }
        int need=1<<k;
        if(n-k+1<need){
            return false;
        }
        unordered_set<string>seen;
        for(int i=0;i<=n-k;i++){
           string sub=s.substr(i,k);
            seen.insert(sub);
            
            if(seen.size()==need){
                return seen.size()==need;
            }
        }
        return seen.size()==need;
    }
};