class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int > mp;
        for(auto u : nums) {
            mp[u]++;
        }
        using P = pair<int, int>;
        priority_queue< P, vector<P>, greater<> > pq;
        for( auto&[val, cnt] : mp){
            pq.push({ cnt, val});
            if ( pq.size()  > k ) pq.pop();
        }
        vector< int > ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
       
    }
};
