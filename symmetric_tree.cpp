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
bool isSymmetric(TreeNode *root)
{
    return check(root, root);
}
bool check(TreeNode *root1, TreeNode *root2)
{
    if (root1->val == root2->val)
    {
        check(root1->left, root2->right);
        check(root1->right, root2->left);
        return true;
    }
    if (root1 == nullptr && root2 == nullptr)
        return true;
    return false;
}
int32_t main()
{

    return 0;
}