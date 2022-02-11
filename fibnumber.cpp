class Solution {
public:
    int fib_helper( int n,vector<int>&v)
    {
      //base case 
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        //memorisation 
        if(v[n]==-1)
            v[n]=fib_helper(n-1,v)+fib_helper(n-2,v);
        return v[n];
    }
    int fib(int n) {
    vector<int>v(n+1,-1);
    return fib_helper(n,v);
    }
    

};
