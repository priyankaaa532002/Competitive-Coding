
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    //moores
    //1,2,3,1,1
    
    int arr[] = {1,2,3,1,1};
    int pos = 0;
    int count = 1;

    for (int i = 1; i < 5; i++)
    {
        if(arr[pos] == arr[i]){
            count++;
        }else{
            count--;
        }
        if (count==0)
        {
            pos = i;
            count = 1;
        }
    }
    

    
    return 0;
}