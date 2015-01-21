/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for(int i=0; i<s.size(); i++)
        {
            char c = s[i];
            int bs = s.size()-i-1;
            res = res +(c-'A'+1)*pow(26.0,bs);
        }
        return res;
        
    }
};