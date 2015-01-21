/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int maxProfit(vector<int> &prices) {
        size_t len_vev = prices.size();
	int min =0;
	int max_pro = 0;
	min = 0;
	if(prices.size()>0) min=prices[0];
	for(int i=1;i<len_vev;i++)
	{
	    
		if(prices[i]<min)
			min = prices[i];
		if((prices[i]-min)>max_pro)
		{
			max_pro = prices[i]-min;
		}

	}
	return max_pro;
    }
};