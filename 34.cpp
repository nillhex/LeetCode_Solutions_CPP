/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    vector<int> searchRange(int A[], int n, int target) {
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(A[i]==target)
            {
                res.push_back(i);
                int j=i;
                for(;j<n;j++)
                {
                    if(A[j]!=target) break;
                }
                res.push_back(j-1);
                return res;
            }
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
};