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
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *headTemp=head;
        if(head!=NULL)
        {
            int temp=head->val;
            while(head->next!=NULL)
            {
                if(head->next->val==temp&&head->next->next!=NULL)
                {
                   head->next=head->next->next;
                }
                else if(head->next->val==temp&&head->next->next==NULL)
                {
                    head->next=NULL;
                    return headTemp;
                }
                else
                {
                    head=head->next;
                }
                temp=head->val;
            }
        }
        return headTemp;
    }
};