#include <vector>
#include<unordered_map>

std::pair<int, int> TwoSum(std::vector<int> vec, int target){
    std::unordered_map<int, int> vecMap;
    for(int i=0;i<vec.size();i++){
        if(vecMap.find(target-vec[i])!=vecMap.end()){
            return {i, vecMap[target-vec[i]]};
        }
        vecMap[vec[i]] = i;
    }
    return {-1, -1};
}
