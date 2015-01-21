/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0 || s.size() == 1) return true;
        string::iterator itBegin = s.begin();
        string::reverse_iterator itEnd = s.rbegin();
        while(itBegin != s.end() && itEnd != s.rend())
        {
            if(isLetterOrNumber(*itBegin) && isLetterOrNumber(*itEnd))
            {
                if(!isEqual(*itBegin,*itEnd))
                {
                    return false;
                }
				 itBegin++;
				 itEnd++;
            }
            if((!isLetterOrNumber(*itBegin))&&(itBegin != s.end()))
            {
                itBegin++;
            }
            if(!isLetterOrNumber(*itEnd)&&(itEnd != s.rend()))
            {
                itEnd++;
            }
        }
		
			return true;
		
    }
    
    bool isLetterOrNumber(char c){
        if(c >= 'a' && c <= 'z') return true;
        else if(c >= 'A' && c <= 'Z') return true;
        else if(c >= '0' && c <= '9') return true;
        else return false;
    }
    
    bool isEqual(char c1,char c2){
        if(c1 == c2) return true;
		else if(((c1 >= 'a' && c1 <= 'z')||(c1 >= 'A' && c1 <= 'Z'))&&((c2 >= 'a' && c2 <= 'z')||(c2 >= 'A' && c2 <= 'Z')))
		{
			if(c1-c2 == 'A'-'a' ||c1-c2 == 'a'-'A') return true;
			else return false;
		}
        else return false;
    }
};