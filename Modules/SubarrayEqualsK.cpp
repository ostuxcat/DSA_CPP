#include<vector>
#include<unordered_map>
int SubarrayEqualsK(std::vector<int> &vec, int target){
    std::vector<int> ps;
    int count=0;
    ps.push_back(vec[0]);
    for(int i=1;i<vec.size();i++){
        ps.push_back(ps[i-1]+vec[i]);
    }
    std::unordered_map<int, int> m;
    for(int j=0;j<vec.size();j++){
        if(ps[j]==target) count++;
        if(m.find(ps[j]-target)!=m.end()) count+=m[ps[j]-target];
        if(m.find(ps[j])==m.end()) m[ps[j]]=0;
        m[ps[j]]++;
    }
    return count;
}
