#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int a = 10;
    
    int *p;
    p=&a;

    cout<<a;
    cout<<*p;
    cout<<p<<endl;//pointer address

    //pointer to an array 
    int arr[5] = {2,4,6,7,10};
    int *ptr;
    ptr = &arr[0]; //or ptr = arr

    for(int i = 0; i < 5; i++){
        cout<<ptr[i]<<endl;
    }
//--------------------------------------------------
    int *ptrHeap = new int[5];
    ptrHeap[0]=10;
    ptrHeap[1]=20;
    ptrHeap[2]=30;
    ptrHeap[3]=40;
    ptrHeap[4]=50;

        for(int i = 0; i < 5; i++){
        cout<<ptrHeap[i]<<endl;
    }
    delete [] ptrHeap; //deallocation of memory

    int *p1;
    char *p2;
    float *p3;
    double *p4; //every pointer size -> 8

    Rectangle r={10,5};
    Rectangle *ptrr = &r;

    ptrr->breadth=20;
    ptrr->length=40;

    //DYNAMIC OBJECT ----> HEAP
    Rectangle *rect = new Rectangle;
    rect->breadth = 15;
    rect->length = 20;
    cout<<rect->length<<" "<<rect->breadth;


    return 0;
}