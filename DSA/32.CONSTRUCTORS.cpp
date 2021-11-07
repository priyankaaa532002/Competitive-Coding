#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }

    int getLength(){
        return length;
    }
    void setLength(int l){
        length = l;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //MONOLITHIC------------------------------------------->
    // int length=0;
    // int breadth=0;
    // cout<<"Enter length and breadth";
    // cin>>length>>breadth;

    // int area = length*breadth;
    // int peri = 2*(length+breadth);
cout << "Enter length and breadth";
    Rectangle r(10,5);
    cout<<r.area();
    cout<<r.perimeter();
    
    // int l=0,b=0;
    // cin>>l,b;
    //r.initialise(l,b);
    // int a = r.area();
    // int peri = r.perimeter();
    return 0;
}