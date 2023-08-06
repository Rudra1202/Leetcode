class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;
        ListNode *head = new ListNode(0);
        ListNodw *next_list = head;
        while (l1 || l2)
        {
            int sum = carry;
            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            if (sum > 9)
            {
                carry = 1;
                sum %= 10;
            }
            else
            {
                carry = 0;
            }
            next_list->next = new ListNode(sum);
            next_list = next_list->next
        }
        if (carry)
        {
            next_list->next = new ListNode(carry);
        }
        return head->next;
    }
};
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int32_t main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     vector<int> v1;
//     vector<int> v2;
//     for (int i = 0; i < n1; i++)
//     {
//         int a;
//         cin >> a;
//         v1.push_back(a);
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         int a;
//         cin >> a;
//         v2.push_back(a);
//     }
//     int a = v1.size();
//     int b = v2.size();
//     int z = max(a, b);
//     if (a > b)
//         for (int i = b; i < z; i++)
//             v2.push_back(0);
//     else if (a < b)
//         for (int i = a; i < z; i++)
//             v1.push_back(0);
//     int w = 0, q = 0;
//     for (int i = 0; i < z; i++)
//     {
//         if (v1[i] + v2[i] + w  > 9)
//         {
//             q = ((v1[i] + v2[i] + w) % 10);
//             w = ((v1[i] + v2[i] + w) / 10);
//         }
//         else
//         {
//             if (v1[i] + v2[i] + w > 9)
//             {
//                 w = (v1[i] + v2[i] + w) % 10;
//             }
//             else
//             {
//                 q = v1[i] + v2[i] + w;
//                 w = 0;
//             }
//         }
//         cout << q << " ";
//     }
//     if(w>0)cout<<w<<endl;
//     else cout<<endl;
//     return 0;
// }