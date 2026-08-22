class Solution {
public:
    bool checkDivisibility(int n) {
        
        int sum=0;
        int product =1;
        
        int org=n;
    
        while(org>0 ){
         
            sum+=org%10;
            product*=org%10;
            org /= 10;
        }
        
        return n % ( sum + product)==0;
    }
};