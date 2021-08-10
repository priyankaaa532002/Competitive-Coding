#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void clearAllBitsFromLSBToIthBit(int x,int i){
    
    int mask = ~((1 << i + 1) - 1);
    x &= mask;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    clearAllBitsFromLSBToIthBit(7,1);
    
    return 0;
}