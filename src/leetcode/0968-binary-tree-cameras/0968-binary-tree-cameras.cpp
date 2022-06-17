#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans = 0;

    int dfs(TreeNode *root) {
        if (!root) return 2;
        int l = dfs(root->left), r = dfs(root->right);
        if (l == 0 || r == 0) {
            ans++;
            return 1;
        }
        return l == 1 || r == 1 ? 2 : 0;
    }

    int minCameraCover(TreeNode *root) {
        return (dfs(root) < 1 ? 1 : 0) + ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
