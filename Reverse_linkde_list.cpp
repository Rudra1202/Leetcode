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
    ListNode* reverseList(ListNode* head){
        ListNode *previous = new ListNode();
        ListNode *current = head;
        while(current!=NULL){
            ListNode *next = current->next;
            current->next = previous;
            previous= current;
            current = next;
        }
        return previous;
    }
};
int32_t main()
{
    return 0;
}