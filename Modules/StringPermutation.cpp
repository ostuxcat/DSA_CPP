#include<string>
bool isFreqSame(int freq1[], int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]) return false;
    }
    return true;
}
bool stringPermutation(std::string s1, std::string s2){
    int freq[26] = {0};
    for(char s:s1){
        freq[s-'a']++;
    }
    int windSize = s1.length();
    for(int i=0;i<s2.length();i++){
        int windIdx=0, idx=i;
        int windFreq[26] = {0};
        while(windIdx<windSize && idx<s2.length()){
            windFreq[s2[idx]-'a']++;
            windIdx++;idx++;
        }
        if(isFreqSame(freq, windFreq)){
            return true;
        }
    }
    return false;
}
