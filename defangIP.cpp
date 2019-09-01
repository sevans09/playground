// defangs IP address
// 100% faster and uses 100% less memory than all C++ submissions
// LC EZ

class Solution {
public:
    string defangIPaddr(string address) {
        for (int i = 0; i < address.length(); i++) {
            if (address.at(i) == '.') {
                address.erase(address.begin() + i);
                address.insert(i, "[.]");
                i++;
            }
        }
        return address;
    }
};
