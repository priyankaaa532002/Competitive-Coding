#include <iostream>
#include <array>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t>0){
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;

        int a[] = {a1,a2,a3};
        int b[] = {b1,b2,b3};

        int count_a = 0;
        for (int i = 0; i < 3; i++)
        {
            if (a[i]==1)
            {
                count_a++;
            }
        }

        int count_b = 0;
        for (int i = 0; i < 3; i++)
        {
            if (b[i]==1)
            {
                count_b++;
            }
        }

        if (count_a == count_b)
        {
            cout<<"Pass\n";
        }else{
            cout<<"Fail\n";
        }
        
        
        t--;
    }
    return 0;
}