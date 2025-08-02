#include<string>
#include<iostream>
std::string removeOccurences(std::string s, std::string p){
    while(s.length()>0 && s.find(p)<s.length()){
        s.erase(s.find(p), p.length());
    };
    return s;
}
