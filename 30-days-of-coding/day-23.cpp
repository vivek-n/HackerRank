	int max(int l, int r){
        if(l > r)
            return l;
        
        return r;
    }

    int height(Node *root){
        if(root == NULL)
            return 0;
 
        if(!root->left && !root->right)
            return 1;
 
        int lheight = height(root->left);
        int rheight = height(root->right);
 
        return max(lheight, rheight) + 1;
    }

    void levelOrder(Node * root){
      //Write your code here
        int h = height(root);
        
  	     if(root == NULL){
             return;
         }
         
         for(int i=1; i<=h; i++){
             printGivenLevel(root, i);
         }
	}

    void printGivenLevel(Node * root, int level){
        if (root == NULL)
            return;
        if (level == 1)
            printf("%d ", root->data);
        else if (level > 1)
        {
            printGivenLevel(root->left, level-1);
            printGivenLevel(root->right, level-1);
        }
    }
