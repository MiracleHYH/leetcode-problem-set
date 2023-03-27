#include <vector>
#include <unordered_map>
using namespace std;


/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sub;
        unordered_map<int, int>::iterator it;
        for (int i = 0; i < nums.size(); ++ i) {
            it = sub.find(nums[i]);
            if (it != sub.end()) {
                return {it->second, i};
            }
            sub[target-nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

