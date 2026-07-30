class Solution {
public:
    int minimumPushes(string word) {
       int size=word.size();
       int totpushes=0;
       for(int i=0;i<size;i++){
        int pushes=i/8+1;
        totpushes+=pushes;
       } 
       return totpushes;
    }
};