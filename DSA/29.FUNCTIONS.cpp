#include <iostream>
using namespace std;


//PASS BY VALUE
void swap(int x,int y){
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<"\n";
}

//PASS BY ADDRESS
void swap2(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    cout<<x<<" "<<y<<"\n";
}

//PASS BY REFERENCE
void swap3(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<"\n";
}

int fun(int a[],int n){
    // int fun(int *a,int n)
    int i;
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}

// int [] fun2(int n){
//     int *p;
//     p = new Array;
//     return p;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a,b;
    a=10;
    b=20;
    swap(a,b); //actual parameters not changed

    swap2(&a,&b); //actual values changed too

    swap3(a,b); //actual values changed too
    cout<<a<<" "<<b;

    int arr[5] = {2,4,6,8,10};
    return 0;
}