// Valid Palindrome
// LC EZ

class Solution {
public:
    bool isPalindrome(string s) {
    char c;
    int i = 0;

    for (int i = 0; i < s.length(); i++) {
       if (isalnum(s.at(i)) == false) {
           s.erase(s.begin() + i);
           i--;
       }
    } 

    int len = s.length();
    string firstHalf = s.substr(0, len / 2);
    transform(firstHalf.begin(), firstHalf.end(), firstHalf.begin(), ::tolower);

    string secondHalf;
    if (len % 2 == 1) {
        secondHalf = s.substr(len / 2 + 1, len - 1);
        reverse(secondHalf.begin(), secondHalf.end());
        transform(secondHalf.begin(), secondHalf.end(), secondHalf.begin(), ::tolower);
    }
    else {
        secondHalf = s.substr(len / 2, len - 1);
        reverse(secondHalf.begin(), secondHalf.end());
        transform(secondHalf.begin(), secondHalf.end(), secondHalf.begin(), ::tolower);
    } 
        
    if (secondHalf == firstHalf) 
        return true;
    else
        return false;
    }
};
