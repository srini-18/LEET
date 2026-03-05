class Solution {
public:
    int minOperations(string s) {
        int countA=0;
        int countB=0;
        for(int i=0;i<s.size();i++){
            if((i%2==0 && s[i]=='1' ) || (i%2 !=0 && s[i]=='0')){
                countA++;
            }
            else {
                countB++;
            }
        }
        return min(countA,countB);
    }
};