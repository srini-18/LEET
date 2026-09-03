class Solution {
public:
    bool uniformArray(vector<int>& a) {
        int mn=INT_MAX,oddcnt=0;
        for(int x:a){
            mn=min(mn,x);
            if(x%2==1)oddcnt++;
        }
        return mn%2||oddcnt==0;
    }
};