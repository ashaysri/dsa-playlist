// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(vector<int> adj[],int s, vector<bool>& vis, int p){
        vis[s]=true;
        for(int u:adj[s]){
            if(!vis[u]){
                if(dfs(adj,u,vis,s)==true)
                    return true;
            }
            else if(u!=p)
                return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V,false);
        for(int i {};i<V;i++){
            if(!vis[i])
                if(dfs(adj,i,vis,-1))
                    return true;
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends