class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end()); 

        for (int i = 0; i < nums.size() - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1])  // Skip duplicates for i
                continue;
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int total = nums[i] + nums[left] + nums[right]; 
                if (total < 0) {
                    ++left;  
                } else if (total > 0) {/
                    --right;  
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});  // Found a triplet
                    while (left < right && nums[left] == nums[left + 1])  // Skip duplicates for left
                        ++left;
                    while (left < right && nums[right] == nums[right - 1])  // Skip duplicates for right
                        --right;
                    ++left;
                    --right;
                }
            }
        }
        return result;
    }
};