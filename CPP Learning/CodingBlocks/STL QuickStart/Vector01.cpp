#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

//INITIALISE A VECTOR
    vector<int> a;
    vector<int> b(5,10); //5 int with values 10 
    //initialise a vector with 0--> v(n,0)
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,10,14};

    //ITERATE OVER THE VECTOR
    for (int i = 0; i < c.size(); i++)
    {
        cout<<c[i]<<",";
    }
    cout<<"\n";
    
    for (auto it = b.begin();it!=b.end();it++)
    {
        cout<<(*it)<<",";
    }
    cout<<"\n";

    for(int x:d){//can use auto as well
        cout<<x<<",";
    }

    //Discuss more functions
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin>>no;
        v.push_back(no); //adds to the end of the vector
        //doubling should be avoided
    }

    for(int x:v){
        cout<<x<<",";
    }
    cout<<"\n";

    //Diffrence (memory level)
    cout<<v.size()<<"\n";
    cout<<v.capacity()<<"\n"; //size of underlying array
    //doubling cuz of push_back
    cout<<v.max_size()<<"\n"; //maximum no of ele a vec can hold in worst case

    cout<<d.size()<<"\n";
    cout<<d.capacity()<<"\n"; //size of underlying array
    cout<<d.max_size()<<"\n"; //maximum no of ele a vec can hold in worst case

}

