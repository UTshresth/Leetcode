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
   

   if(head==nullptr||head->next==nullptr){
      return nullptr;

   }
ListNode*slow=head;
ListNode*fast=head;
while(fast != nullptr && fast->next != nullptr){
slow=slow->next;

fast=fast->next->next;
 if(fast==slow)
 break;

}
if(fast!=slow) return nullptr;
else{
ListNode* slow2=head;

while(slow2!=slow){
   slow2=slow2->next;
   slow=slow->next;
  


}


return slow2;}

        
    }
};