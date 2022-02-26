#include <climits>
class Solution {
  public:
    int leastCoins(vector<int>& coins, int amount) {
      //implement solution using bottom-up 
         vector<int>mem(amount+1,-1);
         return leastCoinsHelper(coins,amount,mem);
      
    }
    int leastCoinsHelper(vector<int>coins,int remainder,vector<int>&mem)
    {
      //base case 
      //if amount <0 
      if(remainder<0)
      return -1;
      //if amount  equal to 0
      if(remainder==0)
      return 0;
      if(mem[remainder]!=-1)
      return mem[remainder];
      int min=INT_MAX;
      for(int coin:coins)
      {
        int count=leastCoinsHelper(coins,remainder-coin,mem);

        if(count>=0 && count<min)
        min=1+count;
      }
      mem[remainder]=min==INT_MAX?-1:min;
      return mem[remainder];
    }
};
/*
 * A:amount 
 * C:total coins
 * time complexity:O(A*C) 
 * space complexity :O(A)
        3
      2      1
    1   0   0   -1 
  0   -1


*/
