#include <vector>
#include <numeric>

class Solution {
public:
    int isValid(int n, std::vector<int>& sweetness) {
        // Calculate total sweetness
        int total_sweetness = std::accumulate(sweetness.begin(), sweetness.end(), 0);
        
        // If the total sweetness is not divisible by 3, return 0
        if (total_sweetness % 3 != 0) {
            return 0;
        }
        
        int target = total_sweetness / 3;
        
        // Dynamic programming array to check if we can achieve the target sum
        std::vector<bool> dp(target + 1, false);
        dp[0] = true;  // Initialize base case (sum 0 is always possible)
        
        // Iterate through all candies in sweetness
        for (int candy : sweetness) {
            // Update dp array in reverse to avoid overwriting the current state
            for (int j = target; j >= candy; --j) {
                if (dp[j - candy]) {
                    dp[j] = true;
                }
            }
        }
        
        // If dp[target] is true, then it's possible to partition the candies into three parts
        return dp[target] ? 1 : 0;
    }
};
