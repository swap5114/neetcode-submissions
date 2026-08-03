class Solution {
public:
    void dfs(int node,unordered_map<int,list<int> > &adj,vector<bool> &visited){
        visited[node] = true;

        for(auto j: adj[node]){
            if(!visited[j]){
                dfs(j,adj,visited);
            }
            
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int,list<int> > adj;
        vector<bool> visited(n,false);
        int count = 0;
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i = 0;i<n;i++){
            if(!visited[i]){
                dfs(i,adj,visited);
                count++;
            }
            
        }
        return count;
    }
};
