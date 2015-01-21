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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        
        if(head==NULL) return NULL;
        ListNode *tempList=head;
        int num=0;
        while(tempList!=NULL)
        {
           num++;
           tempList=tempList->next;
        }
        int minus=num-n;
        if(minus<0)
        {
            return head;
        }
        else
        {
            
            tempList=head;
            if(minus==0)
            {
                head=head->next;
                return head;
            }
            
            while(minus>1)
            {
                minus--;
                tempList=tempList->next;
            }
            tempList->next=tempList->next->next;
            return head;
        }
    }
};