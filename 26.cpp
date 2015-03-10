/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int length;
        int last;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                length++;
                last = A[i];
            }
            else if(last != A[i])
            {
                length++;
                last = A[i];
                A[length-1] = last;
            }
        }
        return length;
        
    }
};