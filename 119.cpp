/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        for(int i=0;i<=rowIndex;i++)
        {
            if(i==0)
                temp.push_back(1);
            else if(i%2!=0)
            {
                int k1 = i/2+1;
                int mid=1;
                for(int m=1;m<k1;m++)
                {
                    int s = temp[m]+mid;
                    mid = temp[m];
                    temp[m] = s;
                }
            }
            else
            {
                int k2 = i/2;
                int mid = 1;
                for(int n=1;n<k2;n++)
                {
                    int s = temp[n]+mid;
                    mid = temp[n];
                    temp[n] = s;
                }
                temp.push_back(2*mid);
            }
        }
        if(rowIndex==0) return temp;
        else if(rowIndex%2!=0)
        {
            for(int q=temp.size()-1;q>=0;q--)
            {
                temp.push_back(temp[q]);
            }
            return temp;
        }
        else
        {
            for(int w=temp.size()-2;w>=0;w--)
            {
                temp.push_back(temp[w]);
            }
            return temp;
        }
    }
};