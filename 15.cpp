/*
*
*    author:  nillhex
*    website:  nillhex.com
*    E-mail:  nillhex[AT]gmail.com
*
*/
class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int> > res;
        if(num.size()<3) return res;
        sort(num.begin(),num.end());
        for(int i = 0; i<num.size()-2;i++)
        {
            if(i>0 && num[i]==num[i-1]) continue;
            int j = i + 1;
            int k = num.size()-1;
            while(j<k)
            {
                if(num[i]+num[j]+num[k]==0)
                {
                    
                    res.push_back({num[i],num[j],num[k]});
                    j++;
                    k--;
                    while(num[j]==num[j-1] &&num[k]==num[k+1]&&j<k) {j++;k--;} //注意要跳过重复元素
                }
                else if(num[i]+num[j]+num[k]>0)
                {
                    k--;
                    while(num[k]==num[k+1] &&j<k) k--;
                }
                else if(num[i]+num[j]+num[k]<0)
                {
                    j++;
                    while(num[j]==num[j-1] &&j<k) j++;
                }
            }
            
        }
        return res;
        
    }
};