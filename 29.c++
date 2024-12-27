#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> findPairs(vector<int>& nums, int target) {   
    vector<pair<int, int>> ans;  
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back({i, j});  
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<pair<int, int>> result = findPairs(nums, target);
    cout << "Pairs whose sum is equal to " << target << ":\n";
    for(auto p : result) {
        cout << "[" << p.first << ", " << p.second << "]\n";
    }

    return 0;
}
