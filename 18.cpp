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
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        sort(num.begin(),num.end());
        vector<vector<int> > res;
        if(num.size()<4) return res;
        for(int i=0; i<num.size()-3; i++)
        {
            for(int j=i+1; j<num.size()-2; j++)
            {
                int k = j+1;
                int l = num.size()-1;
                while(k<l)
                {
                    int sum = num[i]+num[j]+num[k]+num[l];
                    if(sum == target)
                    {
                        res.push_back({num[i],num[j],num[k],num[l]});
                        k++;
                        l--;
                    }
                    else if(sum>target)
                    {
                        l--;
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                }
            }
        }
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
        
    }
};