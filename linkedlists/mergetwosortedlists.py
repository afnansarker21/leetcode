# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# learnt from watching Greg Hogg and Neetcode on YouTube
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        # 1. create a dummy node 
        dummy = ListNode()
        cur = dummy

        # make a loop to order the values from both lists
        while list1 and list2:
            if list1.val < list2.val:
                cur.next = list1 # if the value of list 2 is greater, place list 1 value first
                cur = list1
                list1 = list1.next
            else: 
                cur.next = list2 # vice versa
                cur = list2
                list2 = list2.next
            
        cur.next = list1 if list1 else list2 # what if there isn't a list 1 and 2?
        return dummy.next # the head of the list
        
