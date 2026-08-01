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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        ListNode* second = head;

        if(head->next == NULL) return NULL;
        for(int i=0;i<n;i++){
            //it means that we reached last element, so we need to remove head.
            if(second->next == NULL){
                head = first->next;
                return head;
            }
            second = second->next;
        }

        while(second->next!=NULL){
            first = first->next;
            second = second->next;
        }

        first->next = first->next->next;
        return head;
    }
};