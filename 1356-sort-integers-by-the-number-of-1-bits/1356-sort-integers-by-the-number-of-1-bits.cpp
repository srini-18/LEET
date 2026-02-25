class Solution {
public:
    int countofones(int n){
        int count=0;
        while(n>0){
            if((n&1)==1){
                count++;
            }
            n>>=1;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
      sort(arr.begin(),arr.end(),[this](int a,int b){
        int countA=countofones(a);
        int countB=countofones(b);
        if(countA==countB){
            return a<b;
        }
        return countA<countB;
      });
     
    return arr;
    }
};