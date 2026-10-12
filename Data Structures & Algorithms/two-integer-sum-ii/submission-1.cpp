class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int low = 0, high = v.size() - 1;
        while ( low <= high ){
            int sum = v[low] + v[high];
            if ( sum == target){
                return { low + 1, high + 1};
            }
            if ( sum > target ){
                high--;
            }else {
                low++;
            }
        }
    }
};
