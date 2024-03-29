
class Solution {
public:

        int height(TreeNode * root)
        {

           if (root ==NULL)
           {
               return 0;
           }     

            int left= height(root->left);
            int right= height(root->right);


                return  1+ max(left,right);
        }

        void inorder_(TreeNode* root, bool &ans)
        {
            if (root!=NULL)
            {
                inorder_(root->left,ans);

                int left_height=    height(root->left);
                int right_height=    height(root->right);
            
                    if (abs(left_height-right_height)>1)
                    {
                        ans= ans && false;
                    }
                    inorder_(root->right,ans);
            }
        }     


    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inorder_(root,ans);
        return ans ;
    }
};
