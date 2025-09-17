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
    ListNode* swapPairs(ListNode* head) {
        ListNode*prev=head;
        if(prev==nullptr||prev->next==nullptr) return head;

        ListNode*curr=head->next;
        head=curr;

        while(prev!=nullptr && curr!=nullptr){
               ListNode*temp=curr->next;
               curr->next=prev;
               prev->next=temp;
               if (temp == nullptr || temp->next == nullptr) {
                prev->next = temp;
                break;
            }
               prev->next = temp->next;

            prev = temp;
            curr = prev->next;;
        }
             return head;
        
    }
};