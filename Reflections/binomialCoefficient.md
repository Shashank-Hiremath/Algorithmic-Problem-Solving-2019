Generating Binomial Coefficient.

Approach 1 : We use Array Implementation where in 1D array can be used to get the final result. Time complexity of this implementation
is O(n)

Approach 2 : We use 2D array implementation that uses Dynamic programming which  provides all the intermediate results.
Result of any intermediate steps can be fetched with no trouble. Time complexity and Space complexity is O(n*k)

Approach 3 : We use Recursion which is good for smaller numbers. This technique is inefficient as each it has to 
recursively compute for all values and cannot go back to fetch any value. Time complexity is O(2^n) and
Space complexity derived via Geometric series gives us O(2^n-1).