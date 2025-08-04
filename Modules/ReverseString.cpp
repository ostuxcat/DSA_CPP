#include<string>
#include <algorithm>
std::string reverseWords(std::string &s){
    std::reverse(s.begin(), s.end());
    int n = s.size();
    std::string ans="";
    for(int i=0;i<n;i++){
        std::string word = "";
        while(s[i]!=' ' && i<n){
            word+=s[i];
            i++;
        }
        std::reverse(word.begin(), word.end());
        if(word.length()>0) ans+=" " + word;
    }
    return ans.substr(1);
}
