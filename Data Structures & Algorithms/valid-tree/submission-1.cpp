class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        unordered_map<int,list<int> > adj;
        vector<int>  parent(n,-1);
        vector<bool> visited(n,false);
        queue<int> q;
        for(int i =0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        q.push(0);
        visited[0] = true;
        parent[0] = -1;

        while(!q.empty()){
            int front = q.front();
            q.pop();

            for(auto neighbour : adj[front]){
                if(visited[neighbour] == true && neighbour != parent[front]){
                    return false;
                }
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    parent[neighbour] = front;
                    q.push(neighbour);
                }
            }
        }

        for(int i=0;i<n;i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};
