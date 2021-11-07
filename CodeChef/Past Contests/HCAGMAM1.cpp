#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        string str;
        int x,y;
        cin>>x>>y;
        cin>>str;

        int sal = 0;
        for (int i = 0; i < 30; i++)
        {
            if (str[i] == '1')
            {
                sal += x;
            }
        }

        int bonus = 0;
        int max = 0;
        for (int i = 0; i < 30; i++)
        {
            if((str[i] == '1') && (str[i] == str[i+1])){
                bonus++;
            }
            else
            {
                if (bonus+1>max)
                {
                    max = bonus+1;
                }
                bonus = 0;
            }
            
        }
        cout<<sal + max*y<<"\n";
    }
    return 0;
}