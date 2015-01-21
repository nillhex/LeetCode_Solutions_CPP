/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int trailingZeroes(int n) {
        if(n==0) return 0;
        int num_5 = n;
        int num = 0;
        while(num_5!=0)
        {
            num += num_5/5;
            num_5 = num_5/5;
        }
        return num;
    }
};