/*
*
*    author:  nillhex
*    website:  nillhex.com
*    E-mail:  nillhex[AT]gmail.com
*
*/
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        unordered_map<int, int> nums;
        vector<int> res;
        for(int i=0;i<numbers.size();i++)
        {
            nums[numbers[i]] = i;
        }
        for(int i=0; i<numbers.size();i++)
        {
            int p = target - numbers[i];
            if(nums.find(p)!=nums.end() &&i!=nums[p])
            {
                res.push_back(i+1);
                res.push_back(nums[p]+1);
            }
        }
        return res;
    }
};