bool dfs(int i,vector<int> edges[],int visited[],int path[]){
	visited[i]=1;
	path[i]=1;
	for(int j:edges[i]){
		if(!visited[j]){
			if(dfs(j,edges,visited,path)==true)
			return true;
		}
		else if(path[j]){
			return true;
		}
	}
	path[i]=0;
	return false;
}
bool isCyclic(vector<vector<int>>& edges, int v, int e)
{
	// Write your code here
	int visited[v]={0};
	int path[v]={0};
	vector<int> adj[v];
	for(auto i:edges){
		adj[i[0]].push_back(i[1]);
	}
	for(int i=0;i<v;i++){
		if(!visited[i]){
			if(dfs(i,adj,visited,path)==true)
			return true;
		}
	}
	return false;
}
