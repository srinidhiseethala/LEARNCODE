class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* present=dummy;
        while(present->next!=NULL){
            if(present->next->val==val)
            {
                present->next=present->next->next;
            }
            else{
                present=present->next;
            }
        }
        ListNode* NewHead=dummy->next;
        delete dummy;
        return NewHead;
    }
};
