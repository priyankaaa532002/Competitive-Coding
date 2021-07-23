#include <bits/stdc++.h>
using namespace std;

// bool f(int x, int y)
// {
//     return x>y;
// }

// void vectorFunc(){
//         vector<int> A = {11,2,3,14};
//     cout << A[1] <<"\n";

//     sort(A.begin(), A.end()); //O(NlogN)
//     // 2 3 11 14
//     bool present = binary_search(A.begin(), A.end(), 3); //true
//     present = binary_search(A.begin(), A.end(), 4); //false

//     A.push_back(100);
//     present = binary_search(A.begin(), A.end(), 100);
//     //2 3 11 14 100
//     A.push_back(100);
//     A.push_back(100);
//     A.push_back(100);
//     A.push_back(100);
//     A.push_back(123);
//     //2 3 11 14 100 100 100 100 100 123

//     // vector<int>::iterator it = lower_bound(A.begin(), A.end(),100); //>=
//     auto it = lower_bound(A.begin(), A.end(),100);
//     vector<int>::iterator it2 = lower_bound(A.begin(), A.end(),100); //>

//     cout<< *it << " " <<*it2 << endl;
//     cout<< it2 - it << endl ; //5 //count of 100

//     sort(A.begin(), A.end(),f);

//     //vector<int>::iterator it3;
//     // for ( it3 = A.begin(); it3 != A.end(); it3++)
//     // {
//     //     cout<< *it3 << " ";
//     // }

//     for ( int &x : A) //ref
//     {
//        x++;
//     }
//     //FOR INPUT
//     // for ( int &x : A) //ref
//     // {
//     //    cin>>x;
//     // }
//     for ( int x : A){
//         cout<< x << " ";
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    vector<int> b(6);
    b = {1,2,3,4,5,6};

    //begin end
    vector<int>::iterator x = b.begin();
    auto y = b.end()-1; //last element
    cout<<*x<<"\n";
    cout<<*y<<"\n";

    //rbegin rend
    auto z = b.rbegin();
    cout<<*z<<"\n"; //last element
    auto z2 = b.rend()-1;
    cout<<*z2<<"\n";

    //cbegin cend
    auto c = b.cbegin();
    cout<<*c<<"\n";

    auto d = b.cend()-1;
    cout<<*d<<"\n";
    //same for crbegin and crend

    //size maxsize capacity resize 
    cout<<b.size()<<"\n";
    cout<<b.max_size()<<"\n";
    cout<<b.capacity()<<"\n";

    b.resize(5);
    for(int &x : b){
        cout<<x<<" ";
    }
    cout<<"\n";
    b.resize(8,2);
    for(int &x : b){
        cout<<x<<" ";
    }
    cout<<"\n";
    cout<<b.empty();
    cout<<"\n";
    
    b.resize(4);
    b.shrink_to_fit();
        for(int i = 0; i < 8; i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";

    //refrence operator
    vector<int> m = {1,2,3};
    vector<int> n = {4,5,6};
    m = n;
    for(int &i: m){
        cout<<i<<" ";
    }
    cout<<"\n";

    //element at
    cout<<m[2];
    cout<<"\n";
    cout<<m.at(2);
    cout<<"\n";


    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};

    
    
    //swap
    v1.swap(v2);
    for(int &i: v1){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(int &i: v2){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    //front back
    cout<<v1.front()<<" "<<v1.back();
    cout<<"\n";


    //use of pointer
    int *ptr = &v1[0];
    for(int i = 0; i <3 ; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<"\n";
    cout<<ptr<<"\n";

    //assign
    int v[] = {1,2,3};
    vector<int> v3;
    v3.assign(v, v+3);

    v3.push_back(7);
    v3.push_back(7);
    v3.push_back(7);
    v3.pop_back();
    //insert at a location
    v3.insert(v3.begin()+1,0);
    
    //CLEAR
    //v3.clear();

    for(int &i : v3){
        cout<<i<<" ";
    }
    cout<<"\n";

    //erase
    vector<int> v4 = {1,2,3,4,5,6,7,8};
    v4.erase(v4.begin());

    for(int &i : v4){
        cout<<i<<" ";
    }
    cout<<"\n";

    v4.erase(v4.begin(),v4.begin()+4);
    
    for(int &i : v4){
        cout<<i<<" ";
    }
    cout<<"\n";

    //ALGORITHMS
    //sorting nd reverse

    vector<int> vec = {2,8,5,1};
    sort(vec.begin(),vec.end());
        for(int &i : vec){
        cout<<i<<" ";
    }
    cout<<"\n";

    reverse(vec.begin(),vec.end());
        for(int &i : vec){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    cout<<*max_element(vec.begin(),vec.end())<<" "<<*min_element(vec.begin(),vec.end());
    cout<<"\n";

    cout<<accumulate(vec.begin(),vec.end(),0); //0 is initial sum
    return 0;
}
