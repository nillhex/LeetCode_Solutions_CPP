/*
*
*    author:    nillhex
*    website:   nillhex.com
*    E-mail:    nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int search(int A[], int n, int target) {
        int first = 0;
        int last = n;
        while(first!=last)
        {
            int mid = (last + first)/2;
            if(A[mid]==target) return mid;
            else if(A[first]<=A[mid])
            {
                if(A[first]<=target && target <A[mid])
                {
                    last = mid;
                }
                else
                {
                    first = mid+1;
                }
            }
            else
            {
                 if(A[last-1]>=target && target >A[mid])
                {
                    first = mid+1;
                }
                else
                {
                    last = mid;
                }
            }
        }
        return -1;
        
    }
};