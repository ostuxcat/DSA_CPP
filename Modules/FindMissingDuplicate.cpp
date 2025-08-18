#include <vector>
#include <unordered_set>
std::pair<int, int> FindMissingDuplicate(std::vector<std::vector<int>> vec){
    std::unordered_set<int> setVec;
    int n=vec.size(), a;
    int actualSum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualSum+=vec[i][j];
            if(setVec.find(vec[i][j])!=setVec.end()){
                a = vec[i][j];
            }
            setVec.insert(vec[i][j]);
        }
    }
    return {a, ((n*n)*(n*n+1)/2)+a-actualSum};
}

int FindDuplicate(std::vector<int> vec){
    int sp=vec[0], fp=vec[0];
    do{
        sp=vec[sp];
        fp=vec[vec[fp]];
    }while(sp!=fp);
    sp=vec[0];
    while(sp!=fp){
        sp=vec[sp];
        fp=vec[fp];
    }
    return sp;
}
