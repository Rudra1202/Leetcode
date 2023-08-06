#include <bits/stdc++.h>
using namespace std;
#define int long long
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *deleteDuplicates(ListNode *head)
{
    if (head == NULL)
        return head;
    ListNode *dummy = head;
    ListNode *temp = dummy->next;
    while (temp != NULL)
    {
        if (dummy->val != temp->val)
        {
            dummy->next = temp;
            dummy = temp;
        }
        if (temp->next == NULL && dummy->val == temp->val)
        {
            dummy->next = NULL;
            return head;
        }
        temp = temp->next;
    }
    return head;
}
int32_t main()
{

    return 0;
}