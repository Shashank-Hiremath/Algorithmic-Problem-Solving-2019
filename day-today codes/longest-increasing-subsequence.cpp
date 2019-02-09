// g++ longest-increasing-subsequence.cpp -o longest-increasing-subsequence;./longest-increasing-subsequence
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a[]={5,11,3,15,30,25};
    int n=sizeof(a)/sizeof(a[0]);
    int dp[n],i,j;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(i=1;i<n;i++)
        {
            dp[i]=1;
            for(j=0;j<i;j++)
                if(a[j]<a[i])
                    dp[i]=max(dp[i], dp[j]+1);
        }
    cout<<"Length of longest increasing subsequence: "<<dp[n-1]<<'\n';
    return 0;
}
