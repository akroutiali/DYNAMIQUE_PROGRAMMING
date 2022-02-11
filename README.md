********************Dynamique Programming ***********************

Dynamic Programming (DP): is a programming paradigm that can systematically and efficiently explore all possible solutions to a problem. As such, it is capable of solving a wide variety of problems that often have the following characteristics:

-The problem can be broken down into "overlapping subproblems" - smaller versions of the original problem that are re-used multiple times.
-The problem has an "optimal substructure" - an optimal solution can be formed from optimal solutions to the overlapping subproblems of the original problem.


Dynamic programming is a powerful tool because it can break a complex problem into manageable subproblems, avoid unnecessary recalculation of overlapping subproblems, and use the results of those subproblems to solve the initial complex problem. DP not only aids us in solving complex problems, but it also greatly improves the time complexity compared to brute force solutions. For example, the brute force solution for calculating the Fibonacci sequence has exponential time complexity, while the dynamic programming solution will have linear time complexity

Greedy problems have optimal substructure, but not overlapping subproblems. Divide and conquer algorithms break a problem into subproblems, but these subproblems are not overlapping (which is why DP and divide and conquer are commonly mistaken for one another).


*There are two ways to implement a DP algorithm:

Bottom-up, also known as tabulation.
Top-down, also known as memoization.

***Bottom-up(tabulation )

Bottom-up is implemented with iteration and starts at the base cases

// Pseudocode example for bottom-up

F = array of length (n + 1)
F[0] = 0
F[1] = 1
for i from 2 to n:
    F[i] = F[i - 1] + F[i - 2]

******Top-down (memorisation)
Top-down is implemented with recursion and made efficient with memoization

// Pseudocode example for bottom-up

hashmap=mem
int dp(i)
if i ==0 
return 0
else if i==1
retrun 0
if(!(mem.find(i)))
{
    hashmap[i]=dp[i-1]+dp[i-2];
}
return mem[i];

Which is better?
Any DP algorithm can be implemented with either method, and there are reasons for choosing either over the other. However, each method has one main advantage that stands out:

A bottom-up implementation's runtime is usually faster, as iteration does not have the overhead that recursion does.
A top-down implementation is usually much easier to write. This is because with recursion, the ordering of subproblems does not matter, whereas with tabulation, we need to go through a logical ordering of solving subproblems.