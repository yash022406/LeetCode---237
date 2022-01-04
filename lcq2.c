/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode * temp=node->next->next;
    struct ListNode * nextN=node->next;
    
    node->val = nextN->val;
    nextN->next=NULL;
    node->next = temp;
    
    free(nextN);
    
}