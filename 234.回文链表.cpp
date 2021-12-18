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
    bool isPalindrome(ListNode* head) {
        int length = 0;
        ListNode* node = head;
        while(node) {
            length++;
            node = node->next;
        }
        node = head;
        int index = 0;
        while(node) {
            index++;
            if((length+1)/2 == index)
                break;
            node = node->next;
        }
        ListNode* firstEnd = node->next;
        ListNode* tempNode = NULL;
        ListNode * curlpHead = NULL;
        while(firstEnd) {
            tempNode = firstEnd->next;
            firstEnd->next = curlpHead;
            curlpHead = firstEnd;
            firstEnd = tempNode;
        }
        node->next = curlpHead;
        // ListNode* slowHead = head;
        // ListNode* flastwHead = head;
        // int step = 0;
        // while(slowHead && flastwHead) {
        //     step++;
        //     if(step >(length+1)/2 ) {
        //         if(slowHead->val != flastwHead->val) {
        //             return false;
        //         }
        //          slowHead = slowHead->next;
        //     }
        //     flastwHead = flastwHead->next;
        // }
        return true;
    }
};