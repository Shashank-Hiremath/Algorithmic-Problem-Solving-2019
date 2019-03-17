There are many queries that can be applied to an array which includes (min,max,sum etc), following approaches deal with such queries on 
arrays.

Approach 1 : We use Lookup Table, here a single extra array(of size(len(array)) maintains the cumumlative information related to
the query. For ex : For range min query each index of extra array stores the min till that index of original array. The 
Space complexity = n^2 and Time complexity = n^2 (i.e. processing time) and Fetching time = O(1) as we can directly go to the required index.

Approach 2 : We use Square root Decomposition , this is quicker as we split the number of elements into sqrt(n) parts. Its 
processing time is O(n) , efficiency i.e. access time = O(sqrt(n)) i.e Only if the entire block is covered we can pick, else we need to iterate through the entire array again.

Approach 3: We use Segment tree, this is the most efficient technique which queries in O(log(n)), the tree is built in a bottom
up fashion.