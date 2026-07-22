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
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast != nullptr && fast->next != nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *firsthalf=head;
        ListNode *prev=NULL;
        ListNode *curr=slow;
        while(curr!=nullptr){
            ListNode *first=curr->next;
            curr->next=prev;
            prev=curr;
            curr=first;
        }
        ListNode *sechalf=prev;
        while(sechalf!=nullptr){
            if(firsthalf->val != sechalf->val){
                return false;
            }
            firsthalf=firsthalf->next;
            sechalf=sechalf->next;
        }
        return true;
    }
};
