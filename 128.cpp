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
    int longestConsecutive(vector<int> &num) {
        unordered_map<int ,bool> used;
        for(int i=0;i<num.size();i++)
        {
            used[num[i]] = false;
        }
        int res = 0;
        for(int i=0;i<num.size();i++)
        {
            if(used[num[i]]) continue;
            int length = 1;
            for(int j=num[i]+1;used.find(j)!=used.end();j++)
            {
                length++;
                used[j] = true;
            }
            for(int j=num[i]-1;used.find(j)!=used.end();j--)
            {
                length++;
                used[j] = true;
            }
            if(length>res) res = length;
        }
        return res;
    }
};