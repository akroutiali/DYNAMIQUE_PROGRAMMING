class Solution {
public:
    int tribonacci(int n) {
        vector<int>mem(n+1,-1);
  return tribHelper(n,mem);
        
    }
    int tribHelper(int n,vector<int>&mem)
    {
        //base case 
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 1;
        //memorisation
        if(mem[n]==-1)
            mem[n]=tribHelper(n-1,mem)+tribHelper(n-2,mem)+tribHelper(n-3,mem);
            
        return mem[n];
    }
};
