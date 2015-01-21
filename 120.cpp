/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        if(triangle.size()==0)
        {
            return 0;
        }
        else if(triangle.size()==1)
        {
            return triangle[0][0];
        }
        int rowsNum=triangle.size();
        int elemNum=rowsNum*(1+rowsNum)/2;
        int* minPath=new int[elemNum];
        int minNum;
        minPath[0]=triangle[0][0];
        for(int i=1;i<rowsNum;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if(j==0)
                {
                    minPath[(i+1)*i/2+j]=minPath[(i-1)*i/2+j]+triangle[i][j];
                    minNum=minPath[(i+1)*i/2+j];
                }
                else if(j==i)
                {
                    minPath[(i+1)*i/2+j]=minPath[(i+1)*i/2-1]+triangle[i][j];
                    if(minPath[(i+1)*i/2+j]<minNum)
                    {
                        minNum=minPath[(i+1)*i/2+j];
                    }
                }
                else
                {
                    if((minPath[(i-1)*i/2+j]+triangle[i][j])<(minPath[(i-1)*i/2+j-1]+triangle[i][j]))
                    {
                        minPath[(i+1)*i/2+j]=minPath[(i-1)*i/2+j]+triangle[i][j];
                    }
                    else
                    {
                        minPath[(i+1)*i/2+j]=minPath[(i-1)*i/2+j-1]+triangle[i][j];
                    }
                    if(minPath[(i+1)*i/2+j]<minNum)
                    {
                        minNum=minPath[(i+1)*i/2+j];
                    }
                }
            }
        }
        return minNum;
    }
};