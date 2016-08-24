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
        
        
        //����a��b��ͬλ���ĺ�
        for(; i>=0&&j>=0; i--,j--)
        {
            num = (a[i]-'0') + (b[j]-'0') + c;
            c = num / 2;
            num = num % 2;
            result += ('0' + num);
        }
        
        //���a��b��������a��ʣ�ಿ��
        for(; i>=0; i--)
        {
            num = (a[i] - '0') + c;
            c = num / 2;
            num = num % 2;
            result += ('0' + num);
        }
        
        //���b��a��������b��ʣ�ಿ��
        for(; j>=0; j--)
        {
            num = (b[j] - '0') + c;
            c = num / 2;
            num = num % 2;
            result += ('0' + num);
        }
        
        //������н�λû�д������Ͻ�λ
        if(c != 0)
        {
            result += ('0' + c);
        }
        
        //�����˳�����
        for(int i=0,j=result.length()-1; i<j; i++,j--)
        {
            char temp = result[i];
            result[i] = result[j];
            result[j] = temp;
        }
        
        return result;
    }
};


