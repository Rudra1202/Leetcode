#include <bits/stdc++.h>
using namespace std;
#define int long long
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool isSameTree(TreeNode *p, TreeNode *q)
{
    vector<int>v1;
    if(p->val==q->val){
        isSameTree(p->left->,q->left);
        isSameTree(p->right,q->right);
        return true;
    }
    else return false;
}
int32_t main()
{

    return 0;
}