class Solution {
public:

    int res =0;

   int   height(TreeNode * root )
   {
       if (root ==NULL)
       return 0;

       int left_height = height(root->left);
       int right_height= height(root->right);
       
       res = max(res,1+left_height+right_height);

        return 1 + max(left_height,right_height);
   }
    int diameterOfBinaryTree(TreeNode* root) 
    {
            int data = height(root);

            return res-1;
    }
};
