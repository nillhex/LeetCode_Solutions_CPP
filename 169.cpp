/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int majorityElement(vector<int> &num) {
        
        sort(num.begin(),num.end());
        return num[num.size()/2];
        
        /*   方法二！    
        int times = 0;
        int temp = 0;
        for(int i = 0; i<num.size(); i++)
        {
            if(times == 0)
            {
                temp = num[i];
                times++;
            }
            else
            {
                if(temp == num[i])
                {
                    times ++;
                }
                else 
                {
                    times --;
                }
            }
        }
        return temp;
        */
    }
};