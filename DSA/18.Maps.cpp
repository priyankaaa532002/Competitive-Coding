#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;


int main()
{
    map<string, int> mp;
    //map is sorted in default

    // 1.Insert  
    mp.insert(make_pair("Blo the peepee",520));
    // inserting as pair
    pair<string,int> p;
    p.first = "Bloibloi";
    p.second = 522;
    mp.insert(p);

    mp["Blo Bloi"] = 123;

    // 2. Iteration
    for (auto it = mp.begin(); it != mp.end() ; it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
    }

    for (auto it: mp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }

    // 3. Searching

    auto it = mp.find("Bloibloi");
    if (it != mp.end()){
        cout<<mp["Bloibloi"]<<"\n";
    }
    else{
        cout<<"not present\n";
    }
    cout<<mp["Pika"]<<"\n";
    cout<<"END HERE ----\n";
    
    // 4. Erase
    mp.erase("Blo Bloi");
    for (auto it: mp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }

    //unique keys only
    //does not store duplicates


    // Search contd.
    //if element present -> 1 else -> 0 
    cout<<mp.count("Blo the peepee")<<"\n";
    
    // 5.Update
    mp["Blo the peepee"] += 100; // = , ++, += (any change)
    for (auto it: mp)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }

    //6. COUNT OCCURENCE
    string st = "priyanka chowdhury";
    map<char,int> m;
    for (char c : st)
    {
        if(c != ' '){
            m[c]++;
        }
        //originally initialises everything with zero
    }

    for (auto it: m)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }
    

    //7 . Sorted order with frequency
    int arr[] = {3,3,2,2,1,4};
    map<int,int> freq;
    for(int i = 0 ; i < 6; i++){
        freq[arr[i]]++;
    }
    for(auto it : freq){
        cout<<"("<<it.first<<","<<it.second<<") ";
    }
    cout<<"\n";
    //8. Sum of elements whose freq is 1
    int arr2[] = {1,1,2,2,4};
    map<int,int> freq1;
    for (int i = 0; i < 5; i++)
    {
        freq1[arr2[i]]++;
    }
    int sum = 0;
    for (auto it:freq1)
    {
        if (it.second == 1)
        {
            sum += it.first;
        }
    }
    cout<<sum;
    
    
    return 0;
}