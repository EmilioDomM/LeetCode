/*
    Nov / 01 / 2023

    501. Find Mode in Binary Search Tree --- Easy
    ""Given the root of a binary search tree (BST) with duplicates, return all the mode(s) in it""
*/

/*
  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
*/

class Solution {
public:
    void recursiveFunc(TreeNode *root, unordered_map<int,int> &ump){
        if(root != nullptr){
            recursiveFunc(root->left, ump);
            ump[root->val]++;
            recursiveFunc(root->right, ump);
        }
    }

    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> ump;
        vector<int> map;

        int max_value = -1000;
        recursiveFunc(root, ump);

        for(auto i : ump){
            if(max_value < i.second){
                max_value = i.second;
            }
        }

        for(auto i : ump){
            if(i.second == max_value){
                map.push_back(i.first);
            }
        }

        return map;
    }

};