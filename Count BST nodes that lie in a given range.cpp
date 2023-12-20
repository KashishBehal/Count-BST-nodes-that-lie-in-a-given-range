public:


void inorder(Node *root , vector<int>&ans){
    if(root==NULL){
        return;
    }
    
    inorder(root->left , ans);
    ans.push_back(root->data);
    inorder(root->right , ans);
}
    int getCount(Node *root, int l, int h)
    {
      vector<int>ans; 
      int c=0;
      inorder(root , ans);
      for(int i=0;i<ans.size();i++){
          if(l<=ans[i]   &&   ans[i]<=h){
              c++;
          }
      }
      return c;
    }
};
