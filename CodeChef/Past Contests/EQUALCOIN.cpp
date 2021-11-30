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
        int x, y;
        cin >> x >> y;
        if ((x % 2 == 0) && ((x + y * (2)) % 2 == 0) && (x + y > 0))
        {
            if (x == 0 && (y % 2 != 0))
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}