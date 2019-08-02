// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            int firstNum = nums.at(i);
            for (int j = i + 1; j < nums.size(); j++) {
                int secondNum = nums.at(j);
                if (firstNum + secondNum == target) {
                    vector<int> toReturn;
                    toReturn.push_back(i);
                    toReturn.push_back(j);
                    return toReturn;
                }
            }
        }
        return nums;
    }
};
