/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool search(int A[], int n, int target) {
        int first = 0;
        int last = n;
        while(first != last)
        {
            int mid = (first+last)/2;
            if(A[mid] == target)
            {
                return true;
            }
            if(A[first]<A[mid])
            {
                if(target>=A[first]&&target<A[mid])
                {
                    last = mid;
                }
                else
                {
                    first = mid+1;
                }
            }
            else if(A[first]>A[mid])
            {
                if(target<=A[last-1]&&target>A[mid])
                {
                    first = mid+1;
                }
                else
                {
                    last = mid;
                }
        }
        else
        {
            first++;
        }
       
    }
    return false;
    }
};