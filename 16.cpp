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
    int threeSumClosest(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        int res_sum = 0;
        int res_gap = 99999;
        for(int i=0; i<num.size()-2; i++)
        {
            int j = i+1;
            int k = num.size() -1;
            while(j!=k)
            {
                int sum = num[i]+num[j]+num[k];
                int res_gap_new = abs(sum-target);
                if(res_gap_new<res_gap)
                {
                    res_sum = sum;
                    res_gap = res_gap_new;
                }
                if(sum<target) j++;
                else if(sum>target) k--;
                else return target;
            }
            
        }
        
        return res_sum;
    }
};