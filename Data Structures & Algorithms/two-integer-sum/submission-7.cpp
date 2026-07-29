class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int nextTarget = target - nums[0];
            int low = 0, high = n - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (nums[mid] == nextTarget) {
                    return {i, mid};
                } else if (nums[mid] < nextTarget) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return {-1, -1};
    }
};
