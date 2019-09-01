// Removes vowels from a string

class Solution {
public:
    string removeVowels(string str) {
        int len = str.length();
        for (int i = 0; i < len; i++) {
            if (str[i] == 97) {
                str.erase(str.begin() + i);
                len--;
                i--;
            }
            else if (str[i] == 101) {
                str.erase(str.begin() + i);
                len--;
                i--;
            }
            else if (str[i] == 105) {
                str.erase(str.begin() + i);
                len--;
                i--;
            }
            else if (str[i] == 111) {
                str.erase(str.begin() + i);
                len--;
                i--;
            }
            else if (str[i] == 117) {
                str.erase(str.begin() + i);
                len--;
                i--;
            }
        }
        return str;
    }
};
