
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        array = []
        while head:
            array.append(head.val)
            head = head.next
        array.pop(-n)
        if array:
            head = ListNode(array[0])
            current = head
            for num in array[1:]:
                current.next = ListNode(num)
                current = current.next
            return head
        else:
            return []


def print_list(head: Optional[ListNode]):
    while head:
        print(head.val, end=" -> ")
        head = head.next
    print("None")


head = ListNode(0, ListNode(1, ListNode(2, ListNode(3, ListNode(4, None)))))
result = Solution.removeNthFromEnd(1, head, 2)
print_list(result)
