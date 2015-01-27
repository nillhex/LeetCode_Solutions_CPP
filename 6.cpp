/*
*
*    author:  nillhex
*    website:  nillhex.com
*    E-mail:  nillhex[AT]gmail.com
*
*/
class Solution {
public:
    string convert(string s, int nRows) {
       string res[nRows];
       if(s.size() == 0) return s;
       int i=0;
       int j=0;
      while(i<s.size())
      {
          j=0;
          while(j<nRows && i<s.size())
          {
              res[j] += s[i];
              i++;
              j++;
          }
          j = j-2;
          while(j>0 && i<s.size())
          {
              res[j] +=s[i];
              i++;
              j--;
          }
      }
       string ans="";
       for(int m=0;m<nRows;m++)
       {
           ans += res[m];
       }
       return ans;
    }
};