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
    bool hasCycle(ListNode *head) {
        // if head is null, return false
        if (head == nullptr) 
            return false;
        
// initialising in java:
        // ListNode slow = head;
       // ListNode fast = head.next;

       // initially in C++
       ListNode *slow = head;
       ListNode *fast = head;

        // while (slow != fast) {
            // if (fast == null || fast.next == null) {}
       //     slow = slow.next;
        //    fast = fast.next.next;
       // }
      //  }

      while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true; // this means if they intersect, its a cycle
        }
      }

        return false; // otherwise false...
        
        
    }
};