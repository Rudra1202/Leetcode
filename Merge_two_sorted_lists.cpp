class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
            return l1;
        ListNode *head;
        ListNode *temp;
        if (l1->val > l2->val)
        {
            head = temp = new ListNode(l2->val);
            l2 = l2->next;
        }
        else
        {
            head = temp = new ListNode(l1->val);
            l1=l1->next;
        }
        while (l1 && l2)
        {
            if (l1->val > l2->val)
            {
                temp->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            else
                temp->next = new ListNode(l1->val);
                l1 = l1->next;
        }
        while(l1){
            temp->next = new ListNode(l1->val);
            l1 = l1->next;
        }
        while(l2){
            temp->next = new ListNode(l2->val);
            l2 = l2->next;
        }
    }
};