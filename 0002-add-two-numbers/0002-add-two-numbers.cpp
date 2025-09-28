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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptrA = l1;
        ListNode* ptrB = l2;
        ListNode* dh = new ListNode();
        ListNode* tl = dh;
        int c = 0;

        while(ptrA != nullptr || ptrB != nullptr || c != 0){
            int vA = (ptrA != nullptr) ? ptrA->val:0;
            int vB = (ptrB != nullptr) ? ptrB->val:0;
            int sm = vA + vB + c;
            c = sm / 10;
            int new_val = sm % 10;
            tl->next = new ListNode(new_val);
            tl = tl->next;
            if(ptrA != nullptr) ptrA = ptrA->next;
            if(ptrB != nullptr) ptrB = ptrB->next;
        }

        ListNode* res = dh->next;
        delete dh;
        return res;
    }
};