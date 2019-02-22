// g++ edit-distance.cpp -o edit-distance;./edit-distance
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll min(ll x, ll y, ll z)
{
    return min(min(x,y),z);
}

ll editDistDP(string str1, string str2, ll m, ll n)
{
    ll dp[m+1][n+1];

    for(ll i=0;i<=m;i++)
        for(ll j=0;j<=n;j++)
        {
            if(i==0)
                dp[i][j]=j;
            else if(j==0)
                dp[i][j] = i;
            else if(str1[i-1] == str2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
        }
    return dp[m][n];
}

int main()
{
    string str1 = "sunday";
    string str2 = "sarurday";

    cout<<editDistDP(str1, str2, str1.length(), str2.length());

    return 0;
}