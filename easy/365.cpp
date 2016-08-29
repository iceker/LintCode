class Solution {
public:
    /**
     * @param num: an integer
     * @return: an integer, the number of ones in num
     */
    
    //AC���룬���������λ������ 
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
    
    
    
    //�����Ǹ�����ǰ����  δ��ͨ���������� 
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
