class Solution {
public:
    /**
     * @param a a number
     * @param b a number
     * @return the result
     */
    string addBinary(string& a, string& b) {
        // Write your code here
        
        string result = "";
        
        int num=0,c=0;
        
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        
        //计算a和b相同位数的和
        for(; i>=0&&j>=0; i--,j--)
        {
            num = (a[i]-'0') + (b[j]-'0') + c;
            c = num / 2;
            num = num % 2;
            result += ('0' + num);
        }
        
        //如果a比b长，计算a的剩余部分
        for(; i>=0; i--)
        {
            num = (a[i] - '0') + c;
            c = num / 2;
            num = num % 2;
            result += ('0' + num);
        }
        
        //如果b比a长，计算b的剩余部分
        for(; j>=0; j--)
        {
            num = (b[j] - '0') + c;
            c = num / 2;
            num = num % 2;
            result += ('0' + num);
        }
        
        //如果还有进位没有处理，加上进位
        if(c != 0)
        {
            result += ('0' + c);
        }
        
        //将结果顺序调正
        for(int i=0,j=result.length()-1; i<j; i++,j--)
        {
            char temp = result[i];
            result[i] = result[j];
            result[j] = temp;
        }
        
        return result;
    }
};


