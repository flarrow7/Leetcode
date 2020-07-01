class Solution {
public:
    int arrangeCoins(int n) {
        int num = 1;
        int count = 0;
        
        if (num==1 && n==1){
            count++;
            return count;
        }
        
        while (n>1){
            if (num <= n){
                count++;
                n = n - num;
                num++;
            }
            
            else
                n = 0;
        }
        return count;
        
        
    }
};
