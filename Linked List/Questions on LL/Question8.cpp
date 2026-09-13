// Remove nth node from end (Leetcode --->>>> 19)

#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *fast = head;
    for (int i = 1; i <= n; i++)
    {
        fast = fast->next;
    }

    if (fast == NULL)
    {
        ListNode *newHead = head->next;
        delete head;
        return newHead;
    }

    ListNode *slow = head;

    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }

    ListNode *delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    return head;
}
