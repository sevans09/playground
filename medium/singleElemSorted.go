// LC MED
// 98% faster than other Go submissions
// 100% less memory usage than other Go submissions
// Single Element in a Sorted Array
// Finds the element of an array that only appears once,
// while all others appear twice



func singleNonDuplicate(nums []int) int {
    var numAt int = nums[0]
    for i := 0; i < len(nums) - 1; i++ {
        numAt = nums[i]
        if nums[i+1] == numAt {
            i++
        } else {
            return numAt
        }
	}
    return nums[len(nums) - 1]
}
