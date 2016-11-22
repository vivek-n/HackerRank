		int getHeight1(Node* root) {
            Node* temp = root;

            if (temp == NULL) {
                return 0;
            }

            else {
                int lHeight = getHeight1(temp->left);
                int rHeight = getHeight1(temp->right);

                if (lHeight > rHeight) {
                    return 1 + lHeight;
                }

                else {
                    return 1 + rHeight;
                }
            }
        }

        int getHeight(Node* root){            
            return getHeight1(root) - 1;
        }

