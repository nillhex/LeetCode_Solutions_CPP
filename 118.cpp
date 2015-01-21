/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        int r=0;
        vector<vector<int> > result;
        while(r!=numRows)
        {
            vector<int> row_result;
            for(int i=0;i<=r;i++)
            {
                if(i==0)
                {
                    row_result.push_back(1);
                }
                else if(i==r)
                {
                    row_result.push_back(1);
                }
                else
                {
                    row_result.push_back(result[r-1][i]+result[r-1][i-1]);
                }
            }
            result.push_back(row_result);
            r++;
        }
        return result;
        
    }
};