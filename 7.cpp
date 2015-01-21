/*
*
*    author:    nillhex
*    website:    nillhex.com
*    E-mail:    nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int reverse(int x) {
        vector<int> resVec;
        int y=x;
        if(x<0)
        {
            y=-x;
        }
        int res=0;
        while(y>0)
        {
            int temp=y%10;
            y=y/10;
            resVec.push_back(temp);
        }
        for(int i=0;i<resVec.size();i++)
        {
            res+=resVec[i]*pow(10,resVec.size()-i-1);
        }
        if(x<0)
        {
            return -res;
        }
        else
        {
            return res;
        }
        
    }
};