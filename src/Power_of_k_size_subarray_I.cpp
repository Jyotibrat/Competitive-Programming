#include <vector>
using namespace std;

class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> results;
        int length = nums.size() - k + 1;

        for (int i = 0; i < length; i++) {
            bool isConsecutive = true;

            for (int j = i + 1; j < i + k; j++) {
                if (nums[j] - nums[j - 1] != 1) {
                    isConsecutive = false;
                    break;
                }
            }

            if (isConsecutive) {
                results.push_back(nums[i + k - 1]);
            } else {
                results.push_back(-1);
            }
        }

        return results;
    }
};
