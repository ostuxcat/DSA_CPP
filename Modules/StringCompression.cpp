#include<vector>
#include<string>
int stringCompress(std::vector<char> &chars){
    int n = chars.size(), idx=0;
    for(int i=0;i<n;){
        char ch = chars[i];
        int count=0;
        while(i<n&&chars[i]==ch){
            count++;i++;
        }
        chars[idx] = ch;
        idx++;
        if(count!=1){
            std::string str = std::to_string(count);
            for(char dig:str){
                chars[idx]=dig;
                idx++;
            }
        }
    }
    chars.resize(idx);
    return idx;
}
