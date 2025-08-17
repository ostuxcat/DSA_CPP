#include <climits>
#include<vector>
std::pair<int, int> LinearSearch(std::vector<std::vector<int>> vec, int key){
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]==key)return {i, j};
        }
    }
    return {-1, -1};
}
int MaxRowSum(std::vector<std::vector<int>> vec){
    int finalOut = INT_MIN;
    for(int i=0;i<vec.size();i++){
        int rowSum = 0;
        for(int j=0;j<vec[i].size();j++){
            rowSum+=vec[i][j];
        }
        finalOut = std::max(finalOut, rowSum);
    }
    return finalOut;
}

int MaxColSum(std::vector<std::vector<int>> vec){
    int finalOut = INT_MIN;
    for(int i=0;i<vec.size();i++){
        int rowSum = 0;
        for(int j=0;j<vec[i].size();j++){
            rowSum+=vec[j][i];
        }
        finalOut = std::max(finalOut, rowSum);
    }
    return finalOut;
}

int DiagonalSum(std::vector<std::vector<int>> vec){
    if(vec.size()!=vec[0].size()) return -1;
    int sum=0, n=vec.size();
    for(int i=0;i<n;i++){
        sum+=vec[i][i];
        if(i!=n-i-1) sum+=vec[i][n-i-1];
    }
    return sum;
}
