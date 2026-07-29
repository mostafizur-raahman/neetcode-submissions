class Solution {
    private: 
    void dfs(int node,vector<int> ds[], vector<bool> &used ){
        used[node] = 1;
        for(auto it : ds[node]){
            if (!used[it]){
                dfs(it, ds, used);
            }
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> ds[n];
        for( auto edge : edges ){
            ds[edge[0]].push_back(edge[1]);
            ds[edge[1]].push_back(edge[0]);
        }
        vector<bool> used(n, 0);
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if (!used[i]){
                cnt++;
                dfs(i, ds, used);
            }
        }
        return cnt;
    }
};
