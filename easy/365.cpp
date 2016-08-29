class Solution {
public:
    /**
     * @param num: an integer
     * @return: an integer, the number of ones in num
     */
    
    //AC代码，用与运算和位移运算 
    int countOnes(int num) {
        // write your code here
        int temp = num;
        int ans = 0;
        unsigned int flag = 1;
        while(flag)
        {
            if(temp & flag) ans++;
            flag <<= 1;
        }
        
        return ans;
    }
    
    
    
    //不考虑负数的前提下  未能通过负数测试 
    int countOnes(int num) {
        // write your code here
        int temp = num;
        int ans = 0;
        while(temp != 0)
        {
            int yu = temp % 2;
            if(yu==1){
                ans++;
            }
            temp = temp / 2;
        }
        return ans;
    }
};
