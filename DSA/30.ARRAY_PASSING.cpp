#include <iostream>
using namespace std;


void fun(int A[],int n){
    // for(int a:A){
    //     cout<<a<<"\n";
    // }
    //USE FOR EACH LOOP
}

void fun2(int *A,int n){
    A[0] = 15;
    //ACTUAL VALUES WILL BE CHANGED AS CALLED BY ADDRESS
}

int * fun3(int size){
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i+1;
    }
    return p;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int A[] = {2,4,6,8,10};
    int n = 5;
    fun(A,n);
    cout<<sizeof(A)/sizeof(int)<<"\n";
    for (int x:A)
    {
        cout<<x<<" ";
    }
    //-----------------------------
    int *ptr,sz = 5;
    ptr=fun3(sz);
    for (int i = 0; i < sz; i++)
    {
        cout<<ptr[i]<<"\n";
    }
    
    
    return 0;
}