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
class WordDictionary {
public:
    TrieNode*root;
    WordDictionary() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        root=new TrieNode('\0');
    }
    
    void addWord(string word) {
        TrieNode*child=root;
        int index;
        for(int i=0;i<word.size();i++){
            index=word[i]-'a';
            if(!child->children[index]){
                TrieNode*Node = new TrieNode(word[i]);
                child->children[index]=Node;
            }
            child=child->children[index];
        }
        child->isterminal=true;
    }
    bool search (TrieNode*root,string word){
        if(word.size()==0){
            return root->isterminal;
        }
        int index;
        if (word[0] == '.') {
        bool ans = false;
            for (int i = 0; i < 26; i++) {
                if (root->children[i]) {
                    ans = ans || search(root->children[i], word.substr(1));
                }
            }
            return ans;
        }
        index=word[0]-'a';
        if(root->children[index]){
            return search(root->children[index],word.substr(1));
        }
        return false;
    }
    bool search(string word) {
        return search(root,word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
