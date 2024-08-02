//DFS of Graph
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> ans;
        vector<bool> visited(V,0);
        helper(0 , adj , visited , ans);
        return ans;
    }
    void helper( int i , vector<int>adj[] ,vector<bool>& visited ,vector<int>& ans ){
        visited[i] = 1;
        ans.push_back(i);
        
        for(auto padosi : adj[i]){
            if(!visited[padosi]){
                helper(padosi , adj , visited , ans);
            }
        }
    }
};
