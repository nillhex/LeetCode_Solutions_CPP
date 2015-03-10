/*
*
*    author:    nillhex
*    website:   nillhex.com
*    E-mail:    nillhex[AT]gmail.com
*
*/
class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n==0) return 0;
        int length;
        int times;  //出现的次数
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                length++;
                times++;
            }
            else if(A[i]==A[length-1] && times<2)//当前有重复
            {
                A[length]=A[i];
                times++;
                length++;
            }
            else if(A[i]!=A[length-1])
            {
                A[length]=A[i];
                times=1;
                length++;
            }
        }
        return length;
        
    }
};