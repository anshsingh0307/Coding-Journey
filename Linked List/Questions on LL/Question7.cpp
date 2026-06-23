// Intersection of two linked lists

#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
{
    ListNode *temp = head1;
    map<ListNode *, int> mpp;
    while (temp != NULL)
    {
        mpp[temp] = 1;
        temp = temp->next;
    }

    temp = head2;
    while (temp != NULL)
    {
        if (mpp.find(temp) != mpp.end())
            return temp;
        temp = temp->next;
    }
    return NULL;
}
