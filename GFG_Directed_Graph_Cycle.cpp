//Directed Graph Cycle

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int i ,vector<bool>&dfsCall , vector<bool>& visited , vector<int> adj[]){
        visited[i]=1;
        dfsCall[i]=1;
        for(auto neigh : adj[i]){
            if(visited[neigh]==0 && dfs(neigh , dfsCall ,visited , adj) ) return true;
            else if(dfsCall[neigh]==1) return true;
        }
        dfsCall[i]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
       vector<bool>visited(V,0);
       vector<bool>dfsCall(V,0);
       for(int i=0;i<V;i++){
           if(visited[i]==0 && dfs(i,dfsCall, visited , adj)){
               return true;
           }
       }
       return false;      
    }
};
