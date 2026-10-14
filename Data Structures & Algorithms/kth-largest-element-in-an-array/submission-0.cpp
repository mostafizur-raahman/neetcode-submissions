class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> v;
        for(auto num : nums ){
            v.push_back(num);
        }
        priority_queue<int, vector<int> , greater<>> pq;
        for(int i = 0; i < v.size(); i++){
            
            pq.push(v[i]);
            if ( pq.size() > k ){
                pq.pop();
            }
        }

        return pq.top();

    }
};
