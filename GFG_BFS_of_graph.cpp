//BFS of graph
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans ; 
        
        vector<int> visited(V , 0);
        
        queue<int> q;
        
        
                q.push(0);
                visited[0]=1;
                while(!q.empty()){
                    int vertexEle = q.front();
                    q.pop();
                    
                    ans.push_back(vertexEle);
                    for(auto neigbour : adj[vertexEle]){
                        if(visited[neigbour]==0){
                            visited[neigbour]=1;
                            q.push(neigbour);
                        }
                    }
                    
                }
            
        return ans;
    }
};
