// Program outputs the string representation of numbers from 1 to n.
// For multiples of three it outputs “Fizz” instead of the number and 
// for the multiples of five output “Buzz”. For numbers which are 
// multiples of both three and five output “FizzBuzz”.


func fizzBuzz(n int) []string { 
    output := []string{}
    
    for index := 1; index <= n; index++ {
        if index % 3 == 0 && index % 5 == 0{
            output = append(output, "FizzBuzz")
        }else if index % 3 == 0 {
            output = append(output, "Fizz")
        }else if index % 5 == 0 {
            output = append(output, "Buzz")
        }else {
            t := strconv.Itoa(index)
            output = append(output, t)
        }
    }
    return output
}
