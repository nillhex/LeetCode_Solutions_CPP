/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    string convertToTitle(int n) {
        string s;
        while(n>0)
        {
            n--;
            char c = 'A' + n%26;
            n = n/26;
            s.insert(0,1,c);
        }
      
       return s;
    }
};