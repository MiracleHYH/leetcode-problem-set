#include <cstdio>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *l = nullptr;
        ListNode *p = nullptr;
        while (l1 != nullptr || l2 != nullptr)
        {
            if (l == nullptr)
            {
                l = new ListNode(l1->val + l2->val);
                p = l;
            }
            else
            {
                p->next = new ListNode((l1==nullptr?0:l1->val) + (l2==nullptr?0:l2->val));
                if (p->val >= 10)
                {
                    p->val -= 10;
                    p->next->val ++;
                }
                p = p->next;
            }
            if (l1 != nullptr)
            {
                l1 = l1->next;
            }
            if (l2 != nullptr)
            {
                l2 = l2->next;
            }
        }
        if (p->val >= 10)
        {
            p->val -= 10;
            p->next = new ListNode(1);
        }
        return l;
    }
};
// @lc code=end
