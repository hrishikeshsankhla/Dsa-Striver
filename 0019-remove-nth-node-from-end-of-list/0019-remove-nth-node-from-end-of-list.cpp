class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);  // Dummy node to handle edge cases
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast ahead by n+1 steps
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both fast and slow until fast reaches the end
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the nth node from end
        ListNode* temp = slow->next;
        slow->next = temp->next;
        delete temp;

        ListNode* newHead = dummy->next;
        delete dummy;  // Free memory
        return newHead;
    }
};
