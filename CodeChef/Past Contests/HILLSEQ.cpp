#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        //taking eles
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //map for counts
        map<int, int> mapy;
        for (int i = 0; i < n; i++)
        {
            mapy[arr[i]]++;
        }

        //highest value
        int highest = 0;
        for (auto it : mapy)
        {
            // //it.first //it.second
            if (it.second > highest)
            {
                highest = it.second;
            }
        }

        //int highest_val = mapy.rbegin()->first;
        int highest_val_freq = mapy.rbegin()->second;

        if (highest > 2 || highest_val_freq >1)
        {
            cout << -1<<"\n";
        }
        else if (highest == 2)
        {
            for (auto it = mapy.begin(); it != mapy.end(); it++)
            {
                if (it->second == 2)
                {
                    cout<<it->first<<" ";
                }
            }
            for (auto it = mapy.rbegin(); it != mapy.rend(); it++)
            {
                
                cout<<it->first<<" ";
                
            }
            cout<<"\n";
        }
        else
        {
            for (auto it = mapy.rbegin(); it != mapy.rend(); it++)
            {
                cout<<it->first<<" ";
            }
            cout<<"\n";
        }

    }

    return 0;
}