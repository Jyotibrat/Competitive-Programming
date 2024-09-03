class Solution {
public:
    int getSmallest(int n) {
        return (~n) & (n + 1);
    }
};
