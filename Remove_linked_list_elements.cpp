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

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        while (head != NULL)
        {
            if (head->val == val)
                head = head->next;
            else
                break;
        }
        if (head == NULL)
            return head;
        ListNode *q = head;
        while (q->next != NULL)
        {
            if (q->next == NULL)
                break;
            if (q->next->val == val)
                q->next = q->next->next;
            else
                q = q->next;
        }
        return head;
    }
};
int32_t main()
{
    return 0;
}