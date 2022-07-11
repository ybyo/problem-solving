#include <bits/stdc++.h>

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode *root) {
        if (!root) return {};
        vector<int> ans;
        q.emplace(root);
        queue<TreeNode *> q;
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; ++i) {
                auto *node = q.front();
                q.pop();
                if (i == n - 1) {
                    ans.emplace_back(node->val);
                }
                if (node->left) {
                    q.emplace(node->left);
                }
                if (node->right) {
                    q.emplace(node->right);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
