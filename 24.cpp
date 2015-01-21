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
    ListNode *swapPairs(ListNode *head) {
        ListNode* node=head;
        while(node!=NULL&&node->next!=NULL)
        {
            int temp=node->val;
            node->val=node->next->val;
            node->next->val=temp;
            node=node->next;
            node=node->next;
        }
        return head;
    }
};