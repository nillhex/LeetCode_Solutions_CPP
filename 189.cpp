/*
*
*    author:	nillhex
*    website:	nillhex.com
*    E-mail:	nillhex[AT]gmail.com
*
*/
class Solution {
public:
   void reverse(int nums[], int s,int e)
{
    int temp;
    for(int i=s; i<s+(e-s)/2; i++)
    {
        temp = nums[e-i+s-1];
        nums[e-i+s-1] = nums[i];
        nums[i] = temp;
    }
}
void rotate(int nums[], int n, int k) {
    int kk = n-k%n;
    reverse(nums,0,kk);
    reverse(nums,kk,n);
    reverse(nums,0,n);
    }

};