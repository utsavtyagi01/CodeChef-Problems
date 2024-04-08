class Graph {

public:
    bool detectCycle(int V, vector<int> adj[]) {
        // Write your code here.
        vector<int> visited(V,0);
        queue<pair<int,int> > q;
        for(int i=0;i<V;i++){
          if (visited[i] == 0) {
            q.push({i,-1});
            visited[i] = 1;
    
        while(!q.empty()){
            int curr=q.front().first;
            int parent=q.front().second;
            for(int i=0;i<adj[curr].size();i++){
              if (visited[adj[curr][i]] != 1) {
                q.push({adj[curr][i],curr});
                visited[adj[curr][i]] = 1;
              }

              else if(parent!=adj[curr][i])
                return true;
            }
            q.pop();
        }
          }
        }
        return false;
    }
};
