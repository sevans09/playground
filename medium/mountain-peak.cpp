// Medium difficulty Leetcode Problem #162
// Finds peak element of a mountain array and returns the index number of it
// 96.65% faster than all other C++ online submissions
// Uses less memory than 100% of C++ online submissions

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len = nums.size();
        int first = nums[0];
        int peakIdx = 0;
        for (int i = 0; i < len; i++) {
            if (nums.at(i) > first) {
                peakIdx = i;
                first = nums[i];
            }

        }
        return peakIdx;
    }
};
