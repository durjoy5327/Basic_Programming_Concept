void dfs(vector<vector<int>>&adjlist , int startvertex , vector<bool> & visited){
    visited[startvertex]= true;
    cout<<startvertex<<" ";
    for(int num : adjlist[startvertex]){
        if(!visited[num]){
            dfs(adjlist , num , visited);
        }
    }
}