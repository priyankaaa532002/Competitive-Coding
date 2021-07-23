#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //Create and initialize a vector
    vector<int> d{1,2,3,10,14};
    
    cout<<d.back()<<"\n";
    
    //push_back o(1)
    d.push_back(16);
    //push back
    d.pop_back();

    //insert in middle --> O(n)
    //d.insert(d.begin()+3,100); this correct too
    d.insert(d.begin()+3,4,100);

    //erase
    d.erase(d.begin()+2);
    d.erase(d.begin()+2,d.begin()+5);

    //size
    cout<<d.size()<<"\n";
    cout<<d.capacity()<<"\n";

    //shrink
    d.resize(8); // if size is increasing more memory will be alloted
    cout<<d.capacity()<<"\n";

    //clear
    d.clear(); // does not delete memory occupied by the array

    if(d.empty()){
        cout<<"khali\n";
    }

    for(int c:d){
        cout<<c<<" ";
    }
    cout<<"\n";
    d.push_back(10);
    d.push_back(10);
    d.push_back(10);

    cout<<d.front()<<"\n";
    cout<<d.back()<<"\n";

    //Reserve

    //Avoid doubling use reserve function
    int n;
    cin>>n;
    vector<int> v;
    v.reserve(100);
    
    for (int i = 0; i < n; i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Changing capacity "<<v.capacity()<<"\n";
    }
    cout<<"Capacity: "<<v.capacity()<<"\n";
    for(int x:d){
        cout<<x<<" ";

    }
    cout<<"\n";

}