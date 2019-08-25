# Program outputs the string representation of numbers from 1 to n.
# For multiples of three it outputs “Fizz” instead of the number and 
# for the multiples of five output “Buzz”. For numbers which are 
# multiples of both three and five output “FizzBuzz”.



class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        my_list = [];

        for x in range(1, n + 1):
            if x % 3 == 0 and x % 5 == 0:
                my_list.append('FizzBuzz');
            elif x % 3 == 0:
                my_list.append('Fizz');
            elif x % 5 == 0:
                my_list.append('Buzz');
            else: 
                my_list.append(str(x));
        return my_list;

