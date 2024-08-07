//Topological sort

#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int i,vector<int> adj[], vector<bool>&visited ,stack<int>& s){
	    visited[i]=1;
	    for(auto neigh : adj[i]){
	        if(visited[neigh]==0){
	            dfs(neigh ,adj , visited ,s);
	            
	        }
	    }
	    s.push(i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool>visited(V,0);
	    stack<int> s;
	    
	    for(int i=0;i<V;i++){
	        if(visited[i] == 0){
	            dfs(i , adj  , visited ,s);
	        }
	    }
	    vector<int> ans ;
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};
