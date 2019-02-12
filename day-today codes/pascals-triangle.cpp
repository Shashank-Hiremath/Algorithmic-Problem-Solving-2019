//g++ pascals-triangle.cpp -o pascals-triangle;./pascals-triangle
#include <iostream>
#include <cstring>

using namespace std;
void pascal1(int n, int k)
{
    int dp[n + 1][k + 1],i,j;
    memset(dp, 0, sizeof(dp));
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= k; j++)
            if (i == 0 || j == 0 || i == j)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
    cout << "C(" << n << ", " << k << ") = " << dp[n][k] << '\n';
}

void pascal2(int n, int k)
{
    int c[k+1],i,j;
    memset(c,0,sizeof(c));
    c[0]=1;
    for(i=1;i<=n;i++)
        for(j=min(i,k);j>0;j--)
            c[j]=c[j]+c[j-1];
    cout<<c[k]<<'\n';
}
int main()
{
    int n = 10, k = 5;
    
    pascal1(n, k);
    pascal2(n, k);
    
    return 0;
}