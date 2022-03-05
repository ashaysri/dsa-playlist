// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool dfs(vector<int> adj[],int s,vector<bool>& vis, vector<bool>& recTree){
        vis[s]=true;
        recTree[s]=true;
        for(int u:adj[s]){
            if(!vis[u]&&dfs(adj,u,vis,recTree))
                return true;
            else if(recTree[u])
                return true;
        }
        recTree[s]=false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V,false), recTree(V,false);
        for(int i {};i<V;i++){
            if(!vis[i] && dfs(adj,i,vis,recTree))
                return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends