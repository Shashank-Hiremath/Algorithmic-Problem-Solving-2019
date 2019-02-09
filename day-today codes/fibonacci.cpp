// g++ fibonacci.cpp -o fibonacci;./fibonacci
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n=10;
    long long int f[n+2],i;
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
    for(i=0;i<=n;i++)
        printf("%lld ",f[i]);
    printf("\n");
    return 0;
}
