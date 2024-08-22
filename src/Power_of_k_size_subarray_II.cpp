#include <vector>

class Solution {
public:
    std::vector<int> resultsArray(std::vector<int>& nums, int k) {
        std::vector<int> results;
        int n = nums.size();
        
        if (n < k) return results;

        for (int i = 0; i <= n - k; ++i) {
            bool isConsecutive = true;

            for (int j = i + 1; j < i + k; ++j) {
                if (nums[j] - nums[j - 1] != 1) {
                    isConsecutive = false;
                    break;
                }
            }
            results.push_back(isConsecutive ? nums[i + k - 1] : -1);
        }

        return results;
    }
};