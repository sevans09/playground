class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> toReplace;
        for (int i = 0; i < s.size(); i++) {
            toReplace.push_back(s.at(s.size() - i - 1));
        }
        
        s = toReplace;
    }
};
