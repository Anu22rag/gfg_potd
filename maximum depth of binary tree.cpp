class Solution{
  public:
    /*You are required to complete this method*/
    int solve (Node *root){
        if(root==NULL)return 0;
        int lh=solve(root->left);
        int rh=solve(root->right);
        return max(lh,rh)+1;
    }
    int maxDepth(Node *root) {
        // Your code here
        return solve(root);
    }
};

//time complexity:O(n)
//auxiliary space:O(h)

