/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int romanToNum(char c)
    {
        switch (c)
        {
            case 'I':
            {
                return 1;
                break;
            }
            case 'V':
            {
                return 5;
                break;
            }
             case 'X':
            {
                return 10;
                break;
            }
             case 'L':
            {
                return 50;
                break;
            }
             case 'C':
            {
                return 100;
                break;
            }
             case 'D':
            {
                return 500;
                break;
            }
             case 'M':
            {
                return 1000;
                break;
            }
            default:
            {
                return 0;
                break;
            }
        }
    }
    int romanToInt(string s) {
        int res=0;
        int length = s.length();
        for(int i=0;i<length;i++)
        {
            if(i+1<length)
            {
                if(romanToNum(s[i])==romanToNum(s[i+1]))
                {
                    res = res+romanToNum(s[i]);
                }
                else if(romanToNum(s[i])<romanToNum(s[i+1]))
                {
                    res = res -romanToNum(s[i]);
                }
                else
                {
                    res = res +romanToNum(s[i]);
                }
            }
            else
            {
                res = res +romanToNum(s[i]);
            }
        }
        return res;
        
    }
};