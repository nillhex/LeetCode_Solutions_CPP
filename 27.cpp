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
    int removeElement(int A[], int n, int elem) {
        int index = 0;
        for(int i=0; i<n; i++)
        {
            if(A[i] != elem)
            {
                A[index] = A[i];
                index++;
            }
        }
        return index;
    }
};