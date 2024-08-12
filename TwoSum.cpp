#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Loop through each element in the vector
        for (int i = 0; i < nums.size(); i++) {
            // For each element, check every other element
            for (int j = i + 1; j < nums.size(); j++) {
                // If a pair is found that sums to the target, return their indices
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
