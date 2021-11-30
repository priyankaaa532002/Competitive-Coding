#include <iostream>
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int notPos = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                notPos = -1;
                break;
            }
        }

        if (notPos == -1)
        {
            cout << -1;
        }
        else
        {
            int max = arr[0];
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }
            //cout<<"MAX IS : "<<max<<"\n";
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != max)
                {
                    arr[i] = arr[i] * max + arr[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}