class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int i=0;
        for(int j=0;j<students.size();j++){
            if(students[j]==sandwiches[i]){
                i++;
            }
            else{
                q.push(students[j]);
            }
        }
        while(!q.empty()){
            int t =q.size();
            queue<int>a;
            while(!q.empty()){
                if(q.front()==sandwiches[i]){
                    i++;
                }
                else{
                    a.push(q.front());
                }
                q.pop();
            }
            q=a;
            if(t==a.size()){
                break;
            }
        }
        return q.size();
    }
};
