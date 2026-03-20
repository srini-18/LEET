class Solution {
public:
    int addDigits(int num) {
        int res=num;
        while(res>=10){
            int sum=0;
            while(num>0){
                sum+=num%10;
                num=num/10;
            }
            res=sum;
            num=sum;
        }
        return res;
    }
};