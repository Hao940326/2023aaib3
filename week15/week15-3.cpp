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
    ListNode* myReverse(ListNode* head){
        vector<int>a;
        while(head != nullptr){
            a.push_back(head->val);
            head = head->next;
        }
        ListNode *ans = new ListNode();
        ListNode *now = ans;
        for(int i=a.size()-1;i>=0;i--){
            now->next = new  ListNode(a[i]);
            now = now->next;
        }
    }
    
};