class LRUCache {
public:
    class Node{
        public:
        int key,val;
        Node* next;
        Node* prev;
        Node(int key_,int val_){
            key=key_;
            val=val_;
            prev=NULL;
            next=NULL;
        }
    };
    int cap;
    unordered_map<int,Node*> m;
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    LRUCache(int capacity) {
        cap=capacity;
        m.clear();
        head->next=tail;
        tail->prev=head;
    }
    void delNode(Node* node){
        Node* prevn=node->prev;
        Node* after=node->next;
        prevn->next=after;
        after->prev=prevn;
    }
    void insNode(Node* node){
        Node* curafter=head->next;
        head->next=node;
        node->next=curafter;
        node->prev=head;
        curafter->prev=node;
    }
    int get(int key) {
        if(m.find(key)!=m.end()){
            Node* node=m[key];
            delNode(node);
            insNode(node);
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            Node* node=m[key];
            node->val=value;
            delNode(node);
            insNode(node);
        }
        else{
            if(m.size()==cap){
                Node* node=tail->prev;
                m.erase(node->key);
                delNode(node);
            }
            Node* node=new Node(key,value);
            m[key]=node;
            insNode(node);
        }
    }
};
