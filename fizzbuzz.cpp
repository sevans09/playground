// Program outputs the string representation of numbers from 1 to n.
// For multiples of three it outputs “Fizz” instead of the number and 
// for the multiples of five output “Buzz”. For numbers which are 
// multiples of both three and five output “FizzBuzz”.


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> toReturn;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) toReturn.push_back("FizzBuzz");
            else if (i % 3 == 0) toReturn.push_back("Fizz");
            else if (i % 5 == 0) toReturn.push_back("Buzz");
            else toReturn.push_back(to_string(i));
        }
        return toReturn;
    }
};
