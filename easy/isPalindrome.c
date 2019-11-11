
bool isPalindrome(char * s){
    int length = strlen(s);
    if (!length) return true;
    
    char* leftPtr = s;
    char* rightPtr = s + length - 1;
    
    while (leftPtr < rightPtr) {
        if (!isalnum(*leftPtr)) {
            leftPtr++;
        }
        else if (!isalnum(*rightPtr)) {
            rightPtr--;
        }
        else if (tolower(*leftPtr++) != tolower(*rightPtr--)) {
            return false;
        }
    }
    return true;

}


