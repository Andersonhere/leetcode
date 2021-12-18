/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) {
            return list2;
        }
        if(!list2) {
            return list1;
        }
        ListNode *curHead = new ListNode();
        ListNode *node = curHead;
        while(list1 && list2) {
            if(list1->val < list2->val) {
                node->next = list1;
                list1 = list1->next; 
            }else{
                node->next = list2;
                list2 = list2->next; 
            }
            node = node->next;
        }
        node->next = list1 ? list1 : list2;
        return curHead->next;
    }
};
// @lc code=end

