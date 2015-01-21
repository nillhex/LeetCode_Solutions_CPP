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
    ListNode *sortList(ListNode *head) {
        MergeSort(head);
    }
    ListNode *MergeSort(ListNode *head)
    {
        if(head==NULL) return NULL;
        else if(head->next==NULL) return head;
        else
        {
            int i=0;//数出一共多少个数据
            int j=0;//分一半数据出来
            ListNode *temp=head;
            ListNode *middle=head;
            while(temp!=NULL)
            {
                temp=temp->next;
                i++;
            }
            temp=head;
            middle=middle->next;
            while(j<(i/2-1))
            {
                j++;
                temp=temp->next;
                middle=middle->next;
            }
            temp->next=NULL;
            head=MergeSort(head);
            middle=MergeSort(middle);
            return Merge(head,middle);
        }
    }
    
    ListNode *Merge(ListNode *firstList,ListNode *secondList)
    {
        ListNode *firstNode=firstList;
        ListNode *secondNode=secondList;
        ListNode *thirdNode;
        while(firstNode!=NULL && secondNode!=NULL)
        {
            
            if(firstNode->val>secondNode->val)
            {
                int temp=firstNode->val;
                firstNode->val=secondNode->val;
                ListNode* tempNode=secondNode->next;
                secondNode->val=temp;
                secondNode->next=firstNode->next;
                firstNode->next=secondNode;
                firstNode=secondNode;
                secondNode=tempNode;
            }
            else if(firstNode->next!=NULL)
            {
                firstNode=firstNode->next;
            }
            else if(firstNode->next==NULL)
            {
                thirdNode=firstNode;
                firstNode=firstNode->next;
            }
        }
        if(firstNode==NULL && thirdNode!=NULL)
        {
            thirdNode->next=secondNode;
        }
        return firstList;
    }
};