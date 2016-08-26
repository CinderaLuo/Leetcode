/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string> p,q;
       if(root==NULL) return p;
       stringstream ss;
       string a,b;
       if(root->left==NULL && root->right==NULL)
       {
           if(root->val<0) a=a+'-';
            ss.str("");
           ss<<abs(root->val);
           a=a+ss.str();
           p.push_back(a);
       }
       else if (root->left==NULL && root->right!=NULL)
       {
           p=binaryTreePaths(root->right);
           for(int i=0;i<p.size();i++)
           {
               a="";
               if(root->val<0) a=a+'-';
               ss.str("");
               ss<<abs(root->val);
               a=a+ss.str();
               ss.clear();
               a=a+"->";
               p[i].insert(0,a);
           }
       }
       else if(root->left!=NULL && root->right==NULL)
       {
           p=binaryTreePaths(root->left);
           for(int i=0;i<p.size();i++)
           {
               a="";
               if(root->val<0) a=a+'-';
               ss.str("");
               ss<<abs(root->val);
               a=a+ss.str();
               a=a+"->";
               p[i].insert(0,a);
           }
       }
       else
       {
           p=binaryTreePaths(root->left);
           q=binaryTreePaths(root->right);
           for(int i=0;i<p.size();i++)
           {
               a="";
               if(root->val<0) a=a+'-';
               ss.str("");
               ss<<abs(root->val);
               a=a+ss.str();
               a=a+"->";
               p[i].insert(0,a);
           }
           int t=p.size();
           for(int i=0;i<q.size();i++)
           {
               a="";
               if(root->val<0) a=a+'-';
               ss.str("");
               ss<<abs(root->val);
               a=a+ss.str();
               a=a+"->";
               q[i].insert(0,a);
               p.push_back(q[i]);
           }
       }
       return p;
    }
};