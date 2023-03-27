#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = -1, len = s.length(), ans = 0;
        bool flag[128];
        memset(flag, 0, sizeof(flag));
        while (++ r < len)
        {
            while (flag[int(s[r])] == true)
            {
                flag[int(s[l])] = false;
                l ++;
            }
            flag[int(s[r])] = true;
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
// @lc code=end

