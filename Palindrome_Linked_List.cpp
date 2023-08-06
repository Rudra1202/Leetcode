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
    bool isPalindrome(ListNode *head)
    {
        if(head==NULL || head->next==NULL)return true;
        ListNode *prev = NULL;
        ListNode * current = head;
        while (current!=NULL)
        {
            ListNode *forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
        }
         while(current!=NULL){
            ListNode *temp = new ListNode(current->val);
            temp ->next = prev;
            prev = temp;
            current = current->next;
        }
        while (prev!=NULL&&head!=NULL)
        {
            if(head->val!=prev->val)return false;
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};
int32_t main()
{

    return 0;
}