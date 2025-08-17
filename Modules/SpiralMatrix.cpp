#include<vector>
std::vector<int> getSpiral(std::vector<std::vector<int>> vec){
    int srow=0, erow=vec.size()-1, scol=0,ecol=vec[0].size()-1;
    std::vector<int> finalout;
    while(srow<=erow && scol<=ecol){
        //TOP
        for(int i=scol;i<=ecol;i++){
            finalout.push_back(vec[srow][i]);
        }
        //RIGHT
        for(int i=srow+1;i<=erow;i++){
            finalout.push_back(vec[i][ecol]);
        }
        //BOTTOM
        for(int i=ecol-1;i>=scol;i--){
            if(srow==erow) break;
            finalout.push_back(vec[erow][i]);
        }
        //LEFT
        for(int i=erow-1;i>=srow+1;i--){
            if(scol==ecol) break;
            finalout.push_back(vec[i][srow]);
        }
        srow++;erow--;
        scol++;ecol--;
    }
    return finalout;
}
