#include <iostream>
using namespace std;

int largestPowerOf2InRange(int n){//9 -> //1
    int x = 0;
    //001->010->100->1000
    //x = 1->2->3->4
    while ((1<<x) <= n){
        x++;
    }
    return x - 1;//3 -> 0
}

int countSetBits(int n){
    if (n==0)
    {
        return 0;
    }
    
    int x = largestPowerOf2InRange(n);//3 -> 0
    int bitsUpTo2RaiseX = x * (1<< (x - 1)); //3*4 = 12 -> 0
    int msbFrom2RaiseXToN = n - (1 <<x) + 1; // 9 - 8 + 1 = 2 -> 1
    int rest = n - (1<<x); // 9 - 8 = 1 -> 0
    int ans = bitsUpTo2RaiseX + msbFrom2RaiseXToN + countSetBits(rest); //

    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cout<<countSetBits(4);
    
    return 0;
}