/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        /*ListNode *fast = head, *slow = head;
        int cycleLength = 0;
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow) {
                do {
                    fast = fast->next;
                    cycleLength++;
                } while(fast != slow);
                break;
            }
        }

        if(cycleLength == 0)
            return NULL;

        fast = head;
        slow = head;
        while(cycleLength > 0) {
            fast = fast->next;
            cycleLength--;
        }

        while(fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }

        return slow;*/

        //Using set
        set<ListNode*> visitedNodeSet;
        ListNode *node = head;
        while(node != NULL) {
            if(visitedNodeSet.find(node) != visitedNodeSet.end()) {
                return node;
            }
            visitedNodeSet.insert(node);
            node = node->next;
        }
        return NULL;
    }
};