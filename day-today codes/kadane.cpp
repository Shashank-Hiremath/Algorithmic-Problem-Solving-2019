//g++ kadane.cpp -o kadane;./kadane
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int tma,ma,i,arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0,ma=0,tma=0;i<n;i++)
        {
            tma+=arr[i];
            tma=max(0,tma);
            if(ma<tma)
                ma=tma;
            // cout<<ma<<" ";
        }
    cout<<'\n'<<ma<<'\n';
}






