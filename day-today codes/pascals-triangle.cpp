#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n = 10, k = 5, i, j;
    int dp[n + 1][k + 1];
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