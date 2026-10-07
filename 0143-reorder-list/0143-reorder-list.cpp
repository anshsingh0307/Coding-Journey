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
    void reorderList(ListNode* head) {
        ListNode* temp = head ;
        ListNode* temp2 = head ;
        vector<int> a ;
        vector<int> b ;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp = temp->next ;
        }

        int i = 0 , j = a.size()-1 ;

        while(i<=j){
            b.push_back(a[i]);
            i++ ;
            b.push_back(a[j]);
            j-- ;
        }
         
        int k = 0 ;
        while(temp2!=NULL){
            temp2->val = b[k];
            k++ ;
            temp2=temp2->next ;
        }
    }
};