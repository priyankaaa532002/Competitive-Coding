#include <iostream>
#include <vector>
using namespace std;

vector<int> even(int n){
        int count = 0;
        int sum = 0;
        for(int i = 1; i <= n; i++){
            count++;
            sum = sum + i;
        }
        vector<int>v;
        v.push_back(count);
        v.push_back(sum);
        return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
         vector<int> v_ans = even(n);
        // if (v_ans[1]%2==0){
        //     cout<<v_ans[0]<<"\n";
        // }else{
        //     n--;
        //     even(n);
        // }
        while (v_ans[1]%2!=0)
        {
            n--;
            v_ans = even(n);
        }
        cout<<v_ans[0]<<"\n";
        t--;
    }
    return 0;
}