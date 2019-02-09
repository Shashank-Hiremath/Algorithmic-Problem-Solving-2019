// g++ longest-common-subsequence.cpp -o longest-common-subsequence;./longest-common-subsequence
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1="Anup", s2="Anouop";
    int len1=s1.size(), len2=s2.size(),i,j;
    int dp[len1+1][len2+1];
    for(i=0;i<len1+1;i++)
        dp[i][0]=0;
    for(j=0;j<len2+1;j++)
        dp[0][j]=0;
    for(i=1;i<len1+1;i++)
        for(j=1;j<len2+1;j++)
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
    cout<<dp[i-1][j-1]<<'\n';
    return 0;
}
