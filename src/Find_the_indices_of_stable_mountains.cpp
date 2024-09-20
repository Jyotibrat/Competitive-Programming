#include <vector>
using namespace std;

class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> stable;
        for (int i = 1; i < height.size(); i++) {
            if (height[i-1] > threshold) {
                stable.push_back(i);
            }
        }
        return stable;
    }
};
