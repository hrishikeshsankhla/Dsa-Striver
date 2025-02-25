class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* currentNode = head;
        int count = 0;

        // Count the total number of nodes
        while (currentNode != nullptr) {
            count++;
            currentNode = currentNode->next;
        }

        // If removing the first node
        if (count == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Find the (count-n)th node (one before the target node)
        currentNode = head;
        for (int i = 0; i < count - n - 1; i++) {
            currentNode = currentNode->next;
        }

        // Delete the nth node from end
        ListNode* temp = currentNode->next;
        currentNode->next = temp->next;
        delete temp;

        return head;
    }
};
