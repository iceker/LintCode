class Solution {
public:
    /*
     * @param a: The first integer
     * @param b: The second integer
     * @return: The sum of a and b
     */
    int aplusb(int a, int b) {
        // write your code here, try to do it without arithmetic operators.
        if(b == 0)
        {
            return a;
        }
        int c = a ^ b;
        int d = (a&b) << 1;
        aplusb(c, d);
    }
};
