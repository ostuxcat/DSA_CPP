#include<string>
#include <algorithm>
bool isPalindrome(std::string str){
    std::string str2 = str;
    std::reverse(str2.begin(), str2.end());
    if(str==str2){
        return true;
    }
    return false;
}
