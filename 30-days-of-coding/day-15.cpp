      Node* insert(Node *head, int data)
      {
          Node *temp = new Node(data);
          Node *start = head;

          if (start == NULL) {
              return temp;
          }

          while (start->next) {
              start = start->next;
          }

          start->next = temp;

          return head;
      }
