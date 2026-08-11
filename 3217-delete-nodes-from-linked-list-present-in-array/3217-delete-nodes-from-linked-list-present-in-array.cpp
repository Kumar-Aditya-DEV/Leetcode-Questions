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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int maxVal = 0;
        for(int num : nums) {
            maxVal = max(maxVal, num);
        }
        vector<bool> freq(maxVal + 1, false);
        for(int num : nums) {
            freq[num] = true;
        }

        ListNode dummy(0);
        ListNode* current = &dummy;

        while(head != NULL) {

            if(head->val >= freq.size() || freq[head->val] == false) {
                current->next = head;
                current = current->next;
            }
            head = head->next;
        }
        current->next = NULL;
        return dummy.next;
    }
};