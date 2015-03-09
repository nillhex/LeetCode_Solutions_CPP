/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
            
        if (x < 10)
            return true;
            
        int digits = 0;
        int t = x;
        int d = 0;
        while(t != 0) t /= 10, ++d;
        
        int left = pow(10, d - 1);
        int right = 1;
        while( left >= right)
        {
            if (x / left % 10 != x / right % 10)
                return false;
            
            left /= 10;
            right *= 10;
        }
        return true;
    }
};