// Approach 1: Using Inbuilt List
class BrowserHistory {
    list<string>history;
    list<string> :: iterator it;
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        it=history.begin();
    }
    
    void visit(string url) {
        auto del=it;
        del++;
        history.erase(del,history.end());
        history.push_back(url);
        it++;
    }
    
    string back(int steps) {
        while(it!=history.begin() && steps--)it--;
        return *it;
    }
    
    string forward(int steps) {
        while( it!=(--history.end()) && steps--)it++;
        return *it;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

// Approach 2: By making a Node class
class Node{
    public:
    string s;
    Node*next;
    Node*prev;
    Node(string s){
        this->s=s;
        next=NULL;
        prev=NULL;
    }
};
class BrowserHistory {
public:
    Node*traverse;
    BrowserHistory(string homepage) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        Node*head=new Node(homepage);
        traverse=head;
    }
    
    void visit(string url) {
        Node*temp=new Node(url);
        traverse->next=temp;
        temp->prev=traverse;
        traverse=temp;
    }
    
    string back(int steps) {
        while(steps-- && traverse->prev!=NULL)traverse=traverse->prev;
        return traverse->s;
    }
    
    string forward(int steps) {
        while(steps-- && traverse->next!=NULL)traverse=traverse->next;
        return traverse->s;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */ 
