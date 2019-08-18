// My first Golang program!
// See mountain-peak.cpp for full description of program

func findPeakElement(nums []int) (result int) {

    for i := 0; i<len(nums); i++ {
        if nums[i] >= nums[result] {
            result = i
        }
    }
    return
        
}
