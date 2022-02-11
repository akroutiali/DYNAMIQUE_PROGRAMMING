class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>mem(n+1,-1);
        return robHelper(n-1,nums,mem);
    }
    int robHelper(int n ,vector<int> &nums,vector<int>&mem)
    {
          //base case 
        if(n==0)
                return nums[0];
        if(n==1)
            return max(nums[0],nums[1]);
         //memorisation 
        
         
        if(mem[n]==-1)
            mem[n]=max(nums[n]+robHelper(n-2,nums,mem),robHelper(n-1,nums,mem));
            
            return mem[n];

    }
};
