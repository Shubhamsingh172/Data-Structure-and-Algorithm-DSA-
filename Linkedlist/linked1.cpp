// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode * slow = head;
//         ListNode * fast = head;
//         ListNode * p = head;

//         if(head == nullptr || head->next == nullptr)
//             return nullptr;
        
//         while(fast != nullptr && fast->next != nullptr)
//         {
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast)
//                 break;
//         }

//         if(slow != fast)
//             return nullptr;
        
//         while(slow != p)
//         {
//             slow = slow->next;
//             p = p->next;
//         }

//         return p;
        
//     }
// };