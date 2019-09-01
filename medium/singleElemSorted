// LC MED
// 97% faster than C++ submissions
// Single Element in a Sorted Array
// Finds the element of an array that only appears once,
// while all others appear twice


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) { 
            int numAt = nums.at(i);
            if (nums.at(i+1) == numAt) i++;
            else return nums.at(i);
        }
        return nums.at(nums.size() - 1);
    }
};
