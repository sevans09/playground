// LC MED
// 100% less memory than C++ online submissions
// Wiggle Sort: given an unsorted array, sort s.t. nums[0] <= nums[1] >= nums[2]...

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        bool lessThan = true;
        
        if (nums.size() == 0) return;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (lessThan){
                if (nums.at(i) > nums.at(i + 1)) {
                    int temp = nums.at(i);
                    nums.at(i) = nums.at(i+1);
                    nums.at(i+1) = temp;
                }
                lessThan = false;
            }
            else {
                if (nums.at(i) < nums.at(i + 1)) {
                    int temp = nums.at(i);
                    nums.at(i) = nums.at(i+1);
                    nums.at(i+1) = temp;
                }
                lessThan = true;
            }
        }
    }
};
