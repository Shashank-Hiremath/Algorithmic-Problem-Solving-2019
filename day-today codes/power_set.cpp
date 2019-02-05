#include <iostream>
using namespace std;

int main() {
    int i,j,data[]={1,2,3,4};
    int size=sizeof(data)/sizeof(data[0]);
    int set_size=1<<size;
    for(i=0;i<set_size;i++)
       {
            for(j=0;j<size;j++)
            if(i&(1<<j))
                cout<<data[j];
            cout<<'\n';
       }
    return 0;
}
