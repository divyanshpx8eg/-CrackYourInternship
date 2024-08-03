//Undirected Graph Cycle

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int node, vector<int> adj[] ,vector<bool>& visited , int parent ){
        for(auto i : adj[node]){
            
            if(!visited[i]) {
                visited[i]=1;
                if( dfs(i , adj , visited , node))return true;
                
            }
            else if( i!=parent){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V,0);
        visited[0]=1;
        for(int i=0;i<V;i++){
            if(visited[i]==0){
                visited[i]=1;
                if(dfs(i , adj , visited , -1 )) return true;
            }
        }
        return false;
    }
};

