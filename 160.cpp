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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int A_length = 0;
        int B_length = 0;
        int length = 0;
        ListNode *A = headA;
        ListNode *B = headB;
        
        if(A==NULL || B==NULL)
            return NULL;
        
        while(A->next!=NULL)
        {
            A_length ++;
            A = A->next;
        }
        while(B->next!=NULL)
        {
            B_length ++;
            B = B->next;
        }
        if(A_length>B_length)
        {
            for(int i=0;i<A_length-B_length;i++)
            {
                headA = headA->next;
            }
            length = B_length;
        }
        else
        {
            for(int j=0;j<B_length-A_length;j++)
            {
                headB = headB->next;
            }
            length = A_length;
        }
        for(int k=0;k<length+1;k++)
        {
            if(headA->val==headB->val)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};