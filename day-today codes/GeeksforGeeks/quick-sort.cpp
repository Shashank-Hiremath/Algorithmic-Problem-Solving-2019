// g++ quick-sort.cpp -o quick-sort;./quick-sort
#include<bits/stdc++.h>

using namespace std;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low;j<=high-1;j++)
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i], &arr[j]); 
        }
    swap(&arr[i + 1], &arr[high]); 
    return i+1;
}

void mysort(int a[], int p, int r)
{
    if(p<r)
    {
        int q = partition(a,p,r);
        mysort(a,p,q-1);
        mysort(a,q+1,r);
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    mysort(arr, 0, n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" \n"[i==n-1];
}