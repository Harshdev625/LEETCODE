// Approach 1 The lengthy Approach to creating a whole Trie class and implementing the question, is not the fastest solution but a lot to learn.
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
class Trie{
    TrieNode*root;
    public:
    Trie(){
        root=new TrieNode('\0');
    }
    void insertword(TrieNode*root,string word){
        if(word.size()==0){
            root->isterminal=true;
            return;
        }
        TrieNode*child;
        int index=word[0]-'a';
        if(root->children[index]){
            child=root->children[index];
        }
        else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        insertword(child,word.substr(1));
    }
    void insertword(string word){
        insertword(root,word);
    }
    void addwordhelper(TrieNode*root,string &s,vector<string>&ans){
        if(ans.size()==3)return;
        if(root->isterminal){
            ans.push_back(s);
        }
        for(int i=0;i<26;i++){
            TrieNode*child=root->children[i];
            if(child!=NULL){
                s.push_back('a'+i);
                addwordhelper(child,s,ans);
                s.pop_back();
            }
        }
    }
    void addword(TrieNode*root,string word,string &s,vector<string>&ans){
        if(word.size()==0){
            addwordhelper(root,s,ans);
            return;
        }
        int index=word[0]-'a';
        if(root->children[index]){
            s.push_back(word[0]);
            addword(root->children[index],word.substr(1),s,ans);
        }
        return;
    }
    void addword(string word,string s,vector<string>&ans){
        addword(root,word,s,ans);
    }
};
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        Trie t;
        for(auto i:products)t.insertword(i);
        vector<vector<string>>res;
        for(int i=0;i<searchWord.size();i++){
            vector<string>ans;
            string s;
            t.addword(searchWord.substr(0,i+1),s,ans);
            res.push_back(ans);
        }
        return res;
    }
};

