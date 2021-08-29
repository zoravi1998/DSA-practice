struct TrieNode{
        TrieNode *child[26];
        bool isEnd;
        
        TrieNode(){
            for(int i=0;i<>26;i++)
                chid[i]=NULL;
            isEnd=false;
        }
    }root;
    
    bool search(string key){
        TrieNode *curr = root;
        for(int i=0;i<key.length();i++){
            int index = key[i]-'a';
            if(curr->child[index]==NULL)
                return false;
            curr=curr->child[index];
        }
        return curr->isEnd;
    }
    
    void insert(string key){
        TrieNode *curr = root;
        for(int i=0;i<key.length();i++){
            int index = key[i]-'a';
            if(curr->child[index]==NULL)
                curr->child[index]=new TrieNode();
            curr=curr->child[index];
        }
        curr-isEnd=true;
    }