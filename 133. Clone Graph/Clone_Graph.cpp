class Solution {
public:
    Node* cloneGraph(Node* node) { 
        if (!node) return nullptr;
        Node* cloned = new Node(node->val);
        queue<Node*> q{{node}};
        unordered_map<int, Node*> visited{{node->val, cloned}};
        while (!q.empty()) {
            Node* curr = q.front(); q.pop();
            Node* curr_cloned = visited[curr->val];
            for (Node* neighbor : curr->neighbors) {
                if (!visited.count(neighbor->val)) {
                    Node* neighbor_cloned = new Node(neighbor->val);
                    visited[neighbor->val] = neighbor_cloned;
                    q.push(neighbor);
                }
                curr_cloned->neighbors.push_back(visited[neighbor->val]);
            }
        }
        return cloned;
    }
};
