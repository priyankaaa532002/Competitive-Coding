#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void UniqueElementInTwiceRepetition(vector<int> v){
    int result = 0;
    for(int i = 0; i < v.size(); i++){
        result = result ^ v[i];
    }
    cout<<result;
}

bool FindIthBit(int n,int pos){
    
    n = n & (1<<pos);
    if(n != 0){
        return true;
    }else{
        return false;
    }
}

void TwoUniqueElementInTwiceRepetition(vector<int> v){
    //2 2 1 3
    int result = 0;
    for(int i = 0; i < v.size(); i++){
        result = result ^ v[i];
    }
    //result = 1^3

    int pos = 0;
    int ans = result;
    int temp = result;

    while ((temp & 1) != 1) //sabse pehla 1. rightmost set bit
    {
        pos++;
        temp = temp>>1;
    } // pos = 1

    //pos = log2(temp & ~(temp - 1));

    vector<int> v_temp;
    for (int i = 0; i < v.size(); i++)
    {
        if(FindIthBit(v[i],pos)){
            v_temp.push_back(v[i]);
        } //2 2 3
    }

    //result 1 ^ 3 
    for (int i = 0; i < v_temp.size(); i++)
    {
        result = result ^ v_temp[i];
    } // 1
    
    int a = result; //1

    int b = a ^ ans; //1 ^ 3 ^ 1 = 3
    cout<<a<<" "<<b;
}

void UniqueElementInKthRepetition(vector<int> v){
    int k = 3;
    int arr[32] = {0};

    // 1 1 1 2
    for(int i = 0; i < 32 ; i++){
        for (int j = 0; j < v.size(); j++)
        {
            if(FindIthBit(v[j],i)){
                arr[i]++;
            }
        }// 3 0 0
        // 3 1 0
    }

    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        ans += (arr[i]%k) * pow(2,i);
    }
    cout<<ans;
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    vector<int> v = {5,4,1,4,3,5,1};
    UniqueElementInTwiceRepetition(v);
    cout<<"\n";
    vector<int> v1 = {5,4,1,4,3,5,1,2};
    TwoUniqueElementInTwiceRepetition(v1);
    cout<<"\n";
    vector<int> v2 = {2,2,1,5,1,1,2};
    UniqueElementInKthRepetition(v2);
    return 0;
}