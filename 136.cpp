/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int singleNumber(int A[], int n) {
        sort(A,A+n);
        if(A==NULL) return NULL;
        if(n==1) return A[0];
        for(int i=0;i<n;i++)
        {
            if(A[i+1]==A[i]&&i<n-2)
            {
                i++;
                continue;
            }
            else
            {
                return A[i];
            }
        }
        return NULL;
    }
};