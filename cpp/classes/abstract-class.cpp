class LRUCache : public Cache {
private: int count;
public: LRUCache(int c) {
    Cache::cp = c;
    Cache::tail = NULL;
    Cache::head = NULL;
}
        void set(int k, int val) {
            //cout << "start set..." << endl;
            //display();

            Node *newNode = new Node(k, val);

            if (Cache::cp == count) {
                Node *prev = Cache::tail != NULL ? Cache::tail->prev : NULL;
                prev->next = NULL;

                map<int, Node *>::iterator it = Cache::mp.find(tail->key);

                if (it != Cache::mp.end()) {
                    Cache::mp.erase(it);
                }

                delete(Cache::tail);

                Cache::tail = prev;

                count--;
            }

            newNode->next = Cache::head;
            newNode->prev = NULL;

            if (Cache::head != NULL) {
                Cache::head->prev = newNode;
            }

            else {
                Cache::tail = newNode;
            }

            Cache::head = newNode;

            count++;

            Cache::mp[k] = newNode;

            //display();
            //cout << "finish get..." << endl;
        }

        int get(int k) {
            //cout << "start get..." << endl;
            //display();

            map<int, Node*>::iterator it = Cache::mp.find(k);

            if (it == Cache::mp.end()) {
                return -1;
            }

            Node *prev = it->second->prev;
            Node *next = it->second->next;

            if (prev == NULL) {
                //display();
                //cout << "finish get..." << endl;

                return it->second->value;
            }

            prev->next = it->second->next;

            if (next != NULL) {
                next->prev = prev;
            }
            else {
                Cache::tail = prev;
            }

            Cache::head->prev = it->second;

            it->second->next = Cache::head;
            it->second->prev = NULL;
                        
            Cache::head = it->second;

            //display();
            //cout << "finish get..." << endl;

            return Cache::head->value;
        }
};
