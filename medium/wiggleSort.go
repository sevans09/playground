// LC MED
// Less memory usage than 100% of Go submissions
// Faster than 97% of Go submissions
// Wiggle Sort: given an unsorted array, sort s.t. nums[0] <= nums[1] >= nums[2]...


func wiggleSort(nums []int)  {
    var lessThan = false
    
    if len(nums) == 0 {
        return
    }
    
    for i := 0; i < len(nums) - 1; i++ {
        if lessThan == true {
            if nums[i] < nums[i+1] {
                var temp = nums[i]
                nums[i] = nums[i+1]
                nums[i+1] = temp
            }
            lessThan = false
        } else {
            if nums[i] > nums[i+1] {
                var temp = nums[i]
                nums[i] = nums[i+1]
                nums[i+1] = temp
            }
            lessThan = true
        }
	}
}
