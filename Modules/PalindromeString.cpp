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
bool isAlphaNum(char ch){
    if((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}
bool ValidPalindrome(std::string s) {
    int st=0, end=s.length()-1;
    while(st<end){
        if(!isAlphaNum(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++;end--;
    }
    return true;
}
