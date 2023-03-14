class TrieNode{
    public:
    char data;
    TrieNode**children;
    bool isterminal;
    TrieNode(char data){
        this->data=data;
        isterminal=false;
        children=new TrieNode*[26];
        for(int i=0;i<26;i++){
            children[i]=nullptr;
        }
    }
};
class Trie {
    TrieNode*root;
public:
    Trie() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        root=new TrieNode('\0');
    }
    void insert(TrieNode*root,string word){
        if(word.size()==0){
            root->isterminal=true;
            return;
        }
        int index=word[0]-'a';
        TrieNode*child;
        if(root->children[index]){
            root->children[index]=child;
        }
        else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        insert(root->children[index],word.substr(1));
    }
    void insert(string word) {
        insert(root,word);
    }
    bool search(TrieNode*root,string word){
        if(word.size()==0){
            return root->isterminal;
        }
        int index=word[0]-'a';
        if(root->children[index]){
            return search(root->children[index],word.substr(1));
        }
        return false;
    }
    bool search(string word) {
        return search(root,word);
    }
    bool startWith(TrieNode*root,string prefix){
        int index=prefix[0]-'a';
        if(prefix.size()==0)return true;
        if(root->children[index]){
            return startWith(root->children[index],prefix.substr(1));
        }
        return false;
    }
    bool startsWith(string prefix) {
        return startWith(root,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
