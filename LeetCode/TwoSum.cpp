#include <iostream>
#include <array>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        vector<int> sol;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j< nums.size(); j++){
                 if(nums[i]+nums[j]==target){
                sol.push_back(i);
                sol.push_back(j);
                }
            }
        }
        return sol;
    }
};

int main()
{
    vector<int> v = {2,7,11,15};
    int target = 18;

    Solution solution;
    vector<int> ans = solution.twoSum(v,target);
    cout<<ans[0]<<ans[1];
    return 0;
}


