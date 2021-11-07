#include <iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
};

//CALL BY VALUE----------------------------------------
void fun(Rectangle r){
    r.length = 20;
    cout<<r.length<<"\n";
    cout<<r.breadth<<"\n";
}

//CALL BY ADDRESS----------------------------------------
void fun2(Rectangle *r){
    r->length = 20;
    cout<<r->length<<"\n";
    cout<<r->breadth<<"\n";
}

Rectangle *fun3(){
    Rectangle *p;
    p = new Rectangle;
    p->length = 15;
    p->breadth = 7;

    return p;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    Rectangle r = {10,5};
    fun2(&r);
    cout<<r.length<<"\n";
    cout<<r.breadth<<"\n";

    Rectangle *ptr = fun3();
    cout<<ptr->length<<"\n";
    cout<<ptr->breadth<<"\n";
    return 0;
}